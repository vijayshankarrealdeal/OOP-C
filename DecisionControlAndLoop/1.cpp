#include <iostream>
#include <ctype.h>
class DecisionControlAndLoop
{
private:
    int value = 20;
    char x = ' ';

public:
    //Basic increment for postive number
    void increment()
    {
        if (value > 0)
        {
            value++;
            std::cout << value;
        }
    }
    //to check what is the char
    //include ctype.h
    void input_()
    {
        if (isalpha(x) > 0)
        {
            std::cout<<"Is a Alphabet";
        }
        if (ispunct(x) > 0)
        {
            std::cout<<"Is a Pun";
        }
        if (isdigit(x) > 0)
        {
            std::cout<<"Is a Digit";
        }
        if (isspace(x) > 0)
        {
            std::cout<<"Is a Space";
        }
    }
    //To check larger number
    void check_()
    {
        int x1,x2;
        std::cin>>x1>>x2;
        if(x1>x2)
        {
            std::cout<<x1<<" is greater than "<<x2;
        }else{
             std::cout<<x2<<" is greater than "<<x1;
        }
    }
    //to check odd or even
    void check_e_o()
    {
        int x1;
        std::cin>>x1;
        if(x1%2==0)
        {
            std::cout<<"Even "<<x1;
        }else{
            std::cout<<"odd "<<x1;
        }
    }
    //convert char upper to lower
    void upperlow_()
    {
        char p[100];
        std::cin.getline(p,100);
        int i = 0;
        while(p[i]!='\0')
        {
            int o = int(p[i]);
            if(o>=65 && o<=90)
            {
                o = o + 32;
            }
            else{
                o = o-32;
            }
            p[i] = char(o);
            std::cout<<p[i];
            i++;
        }
    }
    
};
int main()
{
    DecisionControlAndLoop d;
    d.upperlow_();
}