#include <iostream>

int main() {
    int x;
    std::cout<<"Enter x: ";
    std::cin >> x;
    switch(x % 5) {
        case 0:
            std::cout << "y(x)= " << -x;
            break;
        case 1:
            std::cout << "y(x)= " << x;
            break;
        case 2:
            std::cout << "y(x)= " << 5;
            break;
        case 3:
            std::cout << "y(x)= " << -x + 3;
            break;
        case 4:
            std::cout << "y(x)= " << 0;
            break;
    }
}