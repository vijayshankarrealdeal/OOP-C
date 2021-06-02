//cal area using heron's formula
/*
formula s = (a+b+c)/2
area = sqrt (s*(s-a)*(s-b)*(s-c)) 
*/

#include<iostream>
#include<math.h>

int main()
{
    int a,b,c,s,area;
    std::cin>>a>>b>>c;
    s = (a+b+c)/2;
    std::cout<<sqrt((s*(s-a)*(s-b)*(s-c)));
}