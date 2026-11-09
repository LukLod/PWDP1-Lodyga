#include <fstream>


int main()
{

    std::string white_pix = "255";
    std::string black_pix = "0";


    std::fstream fs;
    fs.open("imag.pgm", std::fstream::out);
    fs << "P2\n";
    fs << "800 800\n";

    fs << "255\n";

    std::string x_w="";
    std::string x_b="";

    for(int x=0; x<8; x++){
        for(int i=1; i<101;i++){
            int c=(x%2);
            std::string color = "";
            if(c==0){
                color=white_pix;
            }
            else{
                color=black_pix;
            }
            x_w=x_w+color+" ";
        }


    }





    for(int x=0; x<8; x++){
        for(int i=1; i<101;i++){
            int c=((x+1)%2);
            std::string color="";
            if(c==0){
                color=white_pix;
            }
            else{
                color=black_pix;
            }
            x_b=x_b+color+" ";
        }

    }


    for(int y=0; y<8; y++){
        for(int i=0; i<100; i++){
            if(y%2==0){
                fs<<x_w<<"\n";
            }
            if(y%2==1){
                fs<<x_b<<"\n";
            }
        }
    }

    fs.close();
    return 0;
}
