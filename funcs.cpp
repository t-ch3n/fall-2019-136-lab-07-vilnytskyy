#include <iostream>
#include <string>
#include <cctype>

// task a - again

std::string removeLeadingSpaces(std::string line){
    //std::string result="";

    int i = 0;
    while(isspace(line[i])){
        i++;
    }

    return line.substr(i);
}

//task b

int countChar(std::string line, char c){
    int count=0;

    for(int i=0; i<line.size();i++){
        if(line[i]==c){
            count++;
        }
    }

    return count;
}

std::string indent(std::string line, int n){
    std::string result = "";

    for(int i =0; i<n;i++ ){
        result+='\t';
    }

    return result + line;
}

std::string format(std::string line){
    line = removeLeadingSpaces(line);

    std::string result = "";

    static int count = 0;

    //std::cout<<count<<std::endl;

    if(countChar(line, '{')==1){
        result = indent(line, count);
        count++;
    }else if(countChar(line, '}')==1){
        result = indent(line, count-1);
        count--;
    }else{
        result = indent(line, count);
    }

    return result+'\n';
    
}