/*print upper case and lowercase*/

#include<bits/stdc++.h>
int main()
{
    std::string msg;
    std::getline(std::cin,msg);
    std::transform(msg.begin(),msg.end(),msg.begin(),::tolower);
    std::cout<<msg;

}