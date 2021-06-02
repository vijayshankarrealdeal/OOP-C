#include<iostream>
#include<math.h>
///To enter a number and display it's hex and octa and its sqroot

int main()
{
    int number;
    std::cin>>number;
    std::cout.setf(std::ios::hex);
    std::cout.setf(std::ios::oct);
    std::cout<<sqrt(number);
}