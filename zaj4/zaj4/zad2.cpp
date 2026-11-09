#include <iostream>
#include <fstream>
#include <sstream>

int main(){

    std::string input;
    std::cout<<"enter file name: ";
    std::cin>>input;
    std::string input_file = input;

    std::fstream fs;

    fs.open(input_file, std::fstream::in);

    std::string characters = " ..,:;!=ox0#%@";

    std::string line;

    std::string v;

    std::string content = "";

    std::string format;
    std::string width;
    std::string height;
    std::string maxVal;

    fs >> format >> width >>height >> maxVal;

    int chartab = characters.length();
    double maxValDouble = std::stold(maxVal);
    double multiplier = (double(chartab)-1)/maxValDouble;

    while(fs){
        std::getline(fs, line);
        std::stringstream ss(line);
        std::string val;
        while(ss>>val){
            double valDouble = std::stold(val);
            double symVal = multiplier*valDouble;
            char ch = characters[int(symVal)];
            std::cout<<ch;
        }
        std::cout<<"\n";
    }
    fs.close();

    return 0;
}