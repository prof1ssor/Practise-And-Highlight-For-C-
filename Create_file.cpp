#include <iostream>
#include <fstream>

int main(){
    std::ofstream ofs("My.Text", std::ios::trunc);
    ofs << "John" << std::endl;
    ofs << "25" << std::endl;
    ofs << "Good" << std::endl;
    ofs.close();
}
