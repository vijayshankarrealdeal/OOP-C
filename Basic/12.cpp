#include<iostream>

int main()
{
    int x1,x2;
    std::cin>>x1>>x2;
    x1 = x1+x2;
    x2 = x1-x2;
    x1 = x1-x2;
    std::cout<<x1<<" "<<x2;
}