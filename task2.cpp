#include <iostream>
#include <cmath>

int main() {
    char i;
    std::cout<<"Enter any symbol: "<<std::endl;
    std::cin>>i;
    if (i >= '0' && i <= '9')
        std::cout<<"It's a number";
    else if (i >= 'a' && i <= 'z')
        std::cout<<"It's a letter";
    else if (i >= 'A' && i <= 'Z')
        std::cout<<"It's a letter";
    else
        std::cout<<"Unknown symbol";

}