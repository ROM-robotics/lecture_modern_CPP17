#### MODERN CPP 2017 

##### CPP Header Lists
<a href="https://en.cppreference.com/w/cpp/header">cpp header list | cpp reference </a><br>
<a href="https://www.ibm.com/docs/en/zos/2.3.0?topic=reference-standard-c-library-header-files">cpp header list | IBM </a>


##### Containers
<a href="https://romroboticsmyanmar.gitbook.io/stl/"> Container မြန်မာလို </a>

##### Templates
<a href="https://romroboticsmyanmar.gitbook.io/c-templates/"> Templates မြန်မာလို </a>

#### Setting up C++ Dev in GNU/Linux

// Install requirements
sudo apt install -y git build-essentials cmake cppcheck

1. Preprocess
$ g++ -E hello.cpp > hello.i

2. Compilation
$ g++ -S hello.i

3. Assembly
$ g++ -c hello.s

4. Linking
$ g++ hello.o -o hello

// Useful Compilation flags<br>
-std=c++17              // version<br>
-Wall, -Wextra, -Werror // warning<br>
-O0                     // Optimization ( no optimizations [default] )<br>
-O3 or -Ofast           // Optimization ( full optimizations )<br>
-g                      // Keep Debugging symbols<br>


###### Medium
<a href="https://romroboticsmyanmar.gitbook.io/cmake/">Make ဘာလဲ နှင့် Dyanmic lib / Static lib များအကြောင်း </a>
<a href="https://medium.com/@romrobotics/compilers-in-linux-becade518295"> Compilers in Linux </a> <br>
<a href="https://medium.com/@romrobotics/cmake-introduction-1-335b223b5dc1"> CMake part 1  Introduction</a> <br>
<a href="https://medium.com/@romrobotics/cmake-part-2-include-directories-7b26b6536bd"> CMake part 2  ( include_directories )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-3-set-message-if-801432e03997"> CMake part 3  ( set(), message(), if() )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-4-add-library-87e128790821"> CMake part 4  ( add_library() )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-5-variables-4adf399d8271"> CMake part 5  ( variables )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-6-config-file-4f8fedbd0ddd"> CMake part 6  ( config_file )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-6-if-foreach-b1daf6d77efe"> CMake part 7  ( if, foreach, while )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-8-function-cache-58e11d3549bf"> CMake part 8  ( function, cache )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-9-compile-install-308374354ced"> CMake part 9  ( compile, install )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-10-file-string-execute-process-1696a878f303"> CMake part 10 ( file, string, execute process )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-11-find-package-6380ae363a9d"> CMake part 11 ( find_package() )</a><br>
<a href="https://medium.com/@romrobotics/cmake-part-12-target-3addab718ead"> CMake part 12 ( target )</a><br>

###### Gitbook
<a href="https://romroboticsmyanmar.gitbook.io/stl/">C++ stl အနှစ်များ </a>
<a href="https://romroboticsmyanmar.gitbook.io/c-templates/">C++ Templates</a>
<a href="https://romroboticsmyanmar.gitbook.io/compiler-compile/">Cross-compile Basic</a>
