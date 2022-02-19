#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ofstream o_file;
    std::vector<std::string> vectorList;

    o_file.open("outputFile.txt"); 

    if(o_file.is_open()){
        std::cout << "File opened successfully \n";

        vectorList.push_back("write 1 \n");
        vectorList.push_back("write 2 \n");
        vectorList.push_back("write 3 \n");

        for(std::string write : vectorList){
            o_file << write ;
        }
        o_file.close();

        if(o_file.is_open()){
            std::cout << "Error while closing the file \n";
        }else{
            std::cout << "File Closed successfully \n"; 
            
        }
    }else{
        std::cout << "Error while opening the file \n";
    }

    return 0;
}