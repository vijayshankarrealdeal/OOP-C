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
            std::cout << "Is a Alphabet";
        }
        if (ispunct(x) > 0)
        {
            std::cout << "Is a Pun";
        }
        if (isdigit(x) > 0)
        {
            std::cout << "Is a Digit";
        }
        if (isspace(x) > 0)
        {
            std::cout << "Is a Space";
        }
    }
    //To check larger number
    void check_()
    {
        int x1, x2;
        std::cin >> x1 >> x2;
        if (x1 > x2)
        {
            std::cout << x1 << " is greater than " << x2;
        }
        else
        {
            std::cout << x2 << " is greater than " << x1;
        }
    }
    //to check odd or even
    void check_e_o()
    {
        int x1;
        std::cin >> x1;
        if (x1 % 2 == 0)
        {
            std::cout << "Even " << x1;
        }
        else
        {
            std::cout << "odd " << x1;
        }
    }
    //convert char upper to lower
    void upperlow_()
    {
        char p[100];
        std::cin.getline(p, 100);
        int i = 0;
        while (p[i] != '\0')
        {
            int o = int(p[i]);
            if (o >= 65 && o <= 90)
            {
                o = o + 32;
            }
            else
            {
                o = o - 32;
            }
            p[i] = char(o);
            std::cout << p[i];
            i++;
        }
    }
    /// leap not leap
    void leap()
    {
        int yr;
        std::cin >> yr;
        if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
        {
            std::cout << "Leap Yr";
        }
        else
        {
            std::cout << "chal nikal yaha se";
        }
    }
    void great_()

    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a > b && a > c)
        {
            std::cout << a;
        }
        else if (b > c && b > a)
        {
            std::cout << b;
        }
        else
        {
            std::cout << c;
        }
    }
    //Loops-----------------------------------------
    //sum of n numbers
    void sumx()
    {
        int i = 0;
        int sum = 0;
        while (i < value)
        {
            sum = sum + i;
            i++;
        }
        std::cout << sum;
    }
    void enter_()
    {
        int num;
        int postive = 0, negative = 0, zero = 0;
        while (true)
        {
            std::cin >> num;

            if (num == -1)
            {
                break;
            }
            if (num > 0)
            {
                postive++;
            }
            else if (num < 0)
            {
                negative++;
            }
            else
            {
                zero++;
            }
            std::cout << "Number of Postive" << postive << "\n";
            std::cout << "Number of Negative" << negative << "\n";
            std::cout << "Number of Zero" << zero << "\n";
        }
    }

    ///Pattersns
    void p1()
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "Pass " << i + 1 << " -";
            for (int j = 0; j < 5; j++)
            {
                std::cout << " " << j + 1;
            }
            std::cout << "\n";
        }
    }
    void p2()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    void p3()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    void p4()
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << i;
            }
            std::cout << "\n";
        }
    }
    void p5()
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << j + 1;
            }
            std::cout << "\n";
        }
    }
    void p6()
    {
        int count = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << count++;
            }
            std::cout << "\n";
        }
    }
    void p7()
    {
        for (int i = 65; i <= 70; i++)
        {
            for (int j = 65; j <= i; j++)
            {
                std::cout << char(j);
            }
            std::cout << "\n";
        }
    }
    void p8()
    {
        for (int i = 5; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                std::cout << j;
            }
            std::cout << "\n";
        }
    }
    void p9()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int k = 5; k >= 1; k--)
            std::cout << " ";
            for (int j = 1; j <= i; j++)
                {
                    std::cout<<" "<< j;
                }
            std::cout << "\n";
        }
    }
    void p10()
    {
       int n = 5;
       int i,j,k,l;
       for (i = 1; i <= n; i++)
       {
           for ( k = n; k >= i; k--)
           std::cout<<" ";
           for (j = 1; j <= i; j++)
           std::cout<<""<<j;
           for ( l = j-2; l>0; l--)
           std::cout<<""<<l;
           std::cout<<"\n";   
       }
    }
    void fact()
    {
        int n = 5;
        int pr = 1;
        int res;
        for (int i = 1; i <= n; i++)
        {
            pr = pr*i;
        }
        std::cout<<pr;
    }
    void prime()
    {
        int n;
        std::cin>>n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                std::cout<<i;
                count++;
            }
        }
        if(count==2)
        {
            std::cout<<"Prime";
        }else{
            std::cout<<"Chal nikal";
        }
        
    }
};
int main()
{
    DecisionControlAndLoop d;
    d.prime();
}