#include <iostream>

int main(){
    char G;
    for (int i = 0; i <= 255; i++) {
        G = static_cast<char>(i);
        std::cout << i << "=>" << G << std::endl;
    }
}