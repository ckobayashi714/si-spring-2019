
# Hello World!

```cpp
    // main.cpp
    #include <iostream>

    int main() {
        std::cout << "Hello World!" << endl;
    }
```

On the right side of the screen you can see a simple "Hello World" program. 

Note that the projects in CPSC 131 are compiled and tested on a server running
Linux with the clang++ compiler. It is recommended to familiiarze yourself with
the clang compiler.

To compile this program, install clang and run the command 
`clang++ -std=c++11 main.cpp -o main`

Some useful flag for the command include:  
 - `-Wall` turns on almost every warning  
 - `-std=c++11` uses C++ 11 standards  
 - `-o` allows for the executable to be named  
 - `-g` adds debugger information to compiled file (necessary for debuggin)  

Chances are that you'll be interacting a lot more with the command line in 
this class. Here is a useful 
[cheat sheet](https://learncodethehardway.org/unix/bash_cheat_sheet.pdf) of 
bash commands



