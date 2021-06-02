#include<iostream>

int  main()
{
    char whole_sen[100];
    std::cin.getline(whole_sen,100);
    for (int i = 0;whole_sen[i]!='\0';i++)
    {
        std::cout<<whole_sen[i];
    }
}