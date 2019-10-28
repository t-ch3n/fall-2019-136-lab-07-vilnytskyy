#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main(){
    
    std::string line = "";
    std::string scrambled = "";

    while(getline(std::cin, line)){
        scrambled += format(line);
    }

    std::cout << scrambled << std::endl;

    // std::string ex = "       Example";
    // std::cout<<removeLeadingSpaces(ex) << " " << countChar(ex, 'e') << indent(ex, 3) << std::endl;
}