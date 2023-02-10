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

// Useful Compilation flags
-std=c++17              // version
-Wall, -Wextra, -Werror // warning
-O0                     // Optimization ( no optimizations [default] )
-O3 or -Ofast           // Optimization ( full optimizations )
-g                      // Keep Debugging symbols


###### CMake

<a href="https://medium.com/@romrobotics/compilers-in-linux-becade518295"> Compilers in Linux </a>
<a href="https://medium.com/@romrobotics/cmake-introduction-1-335b223b5dc1"> CMake part 1  Introduction</a>
<a href="https://medium.com/@romrobotics/cmake-part-2-include-directories-7b26b6536bd"> CMake part 2  ( include_directories )</a>
<a href="https://medium.com/@romrobotics/cmake-part-3-set-message-if-801432e03997"> CMake part 3  ( set(), message(), if() )</a>
<a href="https://medium.com/@romrobotics/cmake-part-4-add-library-87e128790821"> CMake part 4  ( add_library() )</a>
<a href="https://medium.com/@romrobotics/cmake-part-5-variables-4adf399d8271"> CMake part 5  ( variables )</a>
<a href="https://medium.com/@romrobotics/cmake-part-6-config-file-4f8fedbd0ddd"> CMake part 6  ( config_file )</a>
<a href="https://medium.com/@romrobotics/cmake-part-6-if-foreach-b1daf6d77efe"> CMake part 7  ( if, foreach, while )</a>
<a href="https://medium.com/@romrobotics/cmake-part-8-function-cache-58e11d3549bf"> CMake part 8  ( function, cache )</a>
<a href="https://medium.com/@romrobotics/cmake-part-9-compile-install-308374354ced"> CMake part 9  ( compile, install )</a>
<a href="https://medium.com/@romrobotics/cmake-part-10-file-string-execute-process-1696a878f303"> CMake part 10 ( file, string, execute process )</a>
<a href="https://medium.com/@romrobotics/cmake-part-11-find-package-6380ae363a9d"> CMake part 11 ( find_package() )</a>
<a href="https://medium.com/@romrobotics/cmake-part-12-target-3addab718ead"> CMake part 12 ( target )</a>