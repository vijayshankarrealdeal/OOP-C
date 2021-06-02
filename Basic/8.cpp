/*
cal the distance between two points
formula = sqrt(pow((x1-x2),2)+ pow((y1-y2),2))
*/

#include<iostream>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,distance;
    std::cin>>x1>>x2>>y1>>y2;
    distance = sqrt( pow((x2-x1),2) + pow((y2-y1),2));
    std::cout<<distance;


}