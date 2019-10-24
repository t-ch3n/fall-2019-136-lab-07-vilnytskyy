#include <iostream>
#include <string>
#include <cctype>
#include <vector>
//task a
std::string removeLeadingSpaces(std::string line)
{
    std::string result = "";

    //std::vector<int> pos;

    bool nspace = true;

    for(int i=0; i<line.size(); i++){
        if(nspace&&!isspace(line[i])){
            result+=line[i];
            nspace = false;
        }else if(line[i]=='\n'){
            result+=line[i];
            nspace =true;
        }else if(!nspace){
            result+=line[i];
        }
    }

    return result;
}