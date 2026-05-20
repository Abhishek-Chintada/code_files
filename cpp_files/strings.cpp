#include <iostream>
#include <string>
int main(void) 
{
    std::string name {"lavada"};
    name = "Abhishek Chintada";
    int i = 0;
    while(name[i] != '\0')
    {
        i++;
    }
    std::cout << name << std::endl;
    std::cout << "Length of the string is " << i << std::endl;
    std::string hehe {};
    std::cout << "Enter your name..." << std::endl;
    std::getline(std::cin, hehe);
    std::cout << hehe << std::endl;
    return 0;
}