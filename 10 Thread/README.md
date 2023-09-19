# cpp thread

<img src="img/confuse.png" />
### how to compile
$ g++ -std=c++11 -pthread blabla.cpp
    (or)
$ compile="g++ -std=c++11 -pthread"
$ $compile blabla.cpp

- thread လုပ်တိုင်းလဲ ပိုမြန်ရမယ်ဆိုလိုတာ မဟုတ်ဘူး
- multipile thread တွေသုံးထားရင် ဘယ်ကောင်အရင် run မလဲ အာမ မခံဘူး

- thread ကို နည်း၅ မျိုးနဲ့သုံးနိုင်ပါတယ်။

#### 1 function pointer နည်း
```
void fun(int x) {
    while(x-->0) { cout << x << endl; }
}
int main() {
    std::thread t1(fun,10);
    t1.join();
    return 0;
}
```
#### 2 Lambda function 
```
int main() {
    auto fun = [] (int x) {
        while(x-->0) { cout << x << endl; }
    };

    std::thread t(fun,10);
    t.join();
    return 0;
}
```
#### 3 Functor
```
class Base{
    public:
        void operator () (int x) {
            while(x-->0) {
                cout << x << endl;
            }
        }
};
int main() {
 
    std::thread t( (Base()), 10);
    t.join();
    return 0;
}
```
#### 4 member function
```
class Base{
    public:
        void run(int x) {
            while(x-->0) {
                cout << x << endl;
            }
        }
};
int main() {
    Base b;

    std::thread t( &Base::run, &b, 10);
    t.join();
    return 0;
}
```
#### 5 static member function
```
class Base{
    public:
        static void run(int x) {
            while(x-->0) {
                cout << x << endl;
            }
        }
};
int main() {
    
    std::thread t( &Base::run, 10);
    t.join();
    return 0;
}
```
- join()  ကို ခေါ်ပြီး thread လုပ်ငန်း ပြီးအောင်စောင့်ရတယ်။ wait  ရတယ်ပေါ့။
- နှစ်ခါ join() ရင် system error နဲ့ terminate ဖြစ်တယ်။
- နှစ်ခါ မ join မိအောင် joinable() ဖြစ်မဖြစ် စစ်သင့်တယ်။ if (t1.joinable()) { t1.join(); blabla; }
- main thread ကနေ အဲ့လို မစောင့်ချင်ရင် detach() လုပ်ပါ။ နှစ်ခါ detach() မဖြစ်အောင် joinable() သုံးပါ။
- 03_...cpp ကိုကြည့်ရင် t1 နဲ့ thread ဖန်တီးပြီး detach လုပ်ထားပါတယ်။ os က child thread ကို ဖန်တီးဖို့ resource နဲ့ အချိန်နဲနဲယူပါတယ်။ အဲ့အချိန်မှာ main thread က လျင်မြန်စွာ ပြီးဆုံးသွားတဲ့အချိန်ထိ child thread က မပြီးသေးတာဖြစ်နိုင်ပါတယ်။ အဲ့အခါကျ os က ဒီ child ဘယ်ကလာလဲဆိုတာသိတာမို့လို့ parent thread မရှိတော့တာနဲ့ child thread ကို suspend လုပ်ပစ်ပါတယ်။ 
- thread object ဖန်တီးပြီးရင် join() သို့မဟုတ် detach() ခေါ်ပေးဖို့လိုပါတယ်။ မခေါ်ထားရင်တော့ thread ရဲ့ destructor က thread ကို joinable ဖြစ်/မဖြစ် စစ်ပါတယ်။ joinable() ဖြစ်ရင် terminate လုပ်ပစ်တာမို့ ကျတော်တို့အတွက် အဆင်မပြေနိုင်ပါ။ ကိုက join() သို့မဟုတ် detach() လုပ်ထားရင်တော့ joinable() မဖြစ်တာမို့ destructor က ဒုက္ခမပေးနိုင်ပါဘူး။

### mutex
- mutex ဆိုတာက race condition ဖြစ်ရင်သုံးတာ။ race condition ဆိုတာက thread/process တွေက common data ကို တပြိုင်နက်တည်း ပြင်နေတာမျိုးကိုပြောတာ။ အဲ့တော့ race condition ဖြစ်ရင် သူ့ကိုရှောင်ဖို့ mutex ကို သုံးရမယ်။ lock(), unlock() တို့သုံးပေါ့။ ပြသနာဖြစ်တဲ့ common data ကို critical area လို့ခေါ်တယ်။ mutex သုံးခြင်းကို 04_mutex_in_threading.cpp ကိုကြည့်ပါ။ parallel ဆိုပေမဲ့ t1 နဲ့ t2 ဟာ စတင်ချိန် micro seconds လောက်တော့ ကွာခြားမှာပါ။ t1 က mutex lock() လုပ်ထားတော့ t2 က block ဖြစ်နေမှာပေါ့။
```
std::mutex m;

int myAmount=0;
void addMoney()
{
    m.lock();
    ++myAmount;
    m.unlock();
}
```
### try_lock()
- m.lock() က ရပ်စောင့်နေရလို့ blocking ဖြစ်ပေမဲ့ m.try_lock() ကတော့ true/false return ပေးတာမို့ non blocking အနေနဲ့သုံးလို့ရတယ်။

- std::mutex::try_lock() က lockable object တစ်ခုပဲ lock လုပ်လို့ရပေမဲ့ std::try_lock() ကတော့ object အများကြီးကို တချိန်တည်းမှာ lock လုပ်ပေးနိုင်တယ်။ std::try_lock(m1,m2,m3,..mn) မှာ m3 ကို lock မလုပ်နိုင်ဘူးဆိုရင် 0 base return ပေးမယ်။ 2 ပေးမှာပေါ့။ အားလုံး lock လုပ်နိုင်ရင် -1 ပေးမယ်။  
- std::recursive_mutex ကတော့ recursively lock လုပ်နိုင်ပါတယ်။ အကြိမ်ရေ မြောက်များစွာ lock လုပ်နိုင်ပြီး unlock ပြန်လုပ်ပေးရပါမယ်။ အဲ့ဒါပြီးမှ တခြား thread က lock လုပ်နိုင်မှာဖြစ်ပါတယ်။ program 09 က comment များကိုကြည့်ပါလေ။

