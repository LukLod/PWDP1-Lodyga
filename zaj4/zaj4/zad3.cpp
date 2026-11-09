#include <fstream>
#include <iostream>
#include <sstream>


int main(){

    std::string input;
    std::cout<<"enter file name: ";
    std::cin>>input;
    std::string input_file = input;

    std::fstream fs;

    fs.open(input_file, std::fstream::in);

    int rows = 0;
    int words = 0;
    int chars = 0;

    std::string line;
    std::string content;

    while(fs){
        std::getline(fs, line);
        std::stringstream ss(line);
        std::string val;
        content.append(line+"\n");

        while(ss>>val){
            words++;
        }
        rows++;
    }

    rows--;


    chars = content.length()-2;
    std::cout<<rows<<" "<<words<<" "<<chars;

    return 0;
}