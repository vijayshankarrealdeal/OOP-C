#include<iostream>

#define PI 3.14159

int main()
{
    std::cout.precision(3);
    std::cout.width(10);
    std::cout.fill('#');
    std::cout<<PI;
}