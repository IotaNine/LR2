#include <iostream>
#include <cmath>

int main() {
    int i;
    float x, y, a, b;
    std::cout<<"Enter X:";
    std::cin>>x;
    y = log(1-x);
    b = pow(x,i)/i;
    i = 0;
    a = 0;
    while(abs(y-a)>= 0.01)
    {
        while(abs(y-a)>=0.000001)
        i++;
        a += b;
    }
    std::cout<<"log(1-x): "<<y<<std::endl;
    std::cout<<"Number of iterations: "<<i<<std::endl;
    std::cout<<"Value of a: "<<a;
}
