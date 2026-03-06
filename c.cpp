#include <iostream>
#include <string>

void printMessage(const std::string& name);
void printNumber(int number);

int main(int argc, char* argv[]) {

    std::string name = argv[1];
    int number = std::stoi(argv[2]);
    std::string flag = argv[3];

    printMessage(name);
    printNumber(number);

    if(flag == "true")
        std::cout << "Boolean flag is TRUE" << std::endl;
    else
        std::cout << "Boolean flag is FALSE" << std::endl;

    return 0;
}
