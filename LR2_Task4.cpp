#include <iostream>
#include <cmath>

int main() {
    float Prec = 0.01;
    float Delt = 0;
    float Approx = 0;
    float x = 0;
    float y = 0;
    int i = 1;
    std::cout << "Enter X: ";
    std::cin >> x;
    y = log(1 - x);
    std::cout << "Y = " << y << std::endl << std::endl;
    for (int j = 0; j < 5; j++)
    {
        do
        {
            Approx += (-pow(x, i) / i);
            Delt = abs(y - Approx);
            i++;
        } while (Delt > Prec);
        std::cout << "Precision: " << Prec << std::endl << "Iterations: " << i << std::endl << std::endl;
        Prec /= 10;
    }
}
