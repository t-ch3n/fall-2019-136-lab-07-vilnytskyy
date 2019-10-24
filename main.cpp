#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main(){
    std::cout << removeLeadingSpaces("                int main(){\n           // Hi, I'm a program!\nint x = 1;\n    for(int i = 0; i < 10; i++) {\ncout << i;\n          cout << endl;\n }\n    }") << std::endl;
}