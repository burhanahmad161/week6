#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    cout<<"Enter your speed:";
    cin>>speed;
    checkSpeed(speed);  
}
string checkSpeed(float speed)
{
   float condition=speed;
   if(speed<=10)
   {
    cout<<"Slow";
   }
   else if(speed>10 && speed<=50)
   {
    cout<<"Average";
   }
   else if(speed>50 && speed<=150)
   {
    cout<<"Fast";
   }
   else if(speed>150 && speed<=1000)
   {
    cout<<"Ultra fast";
   }
   else
   {
     cout<<"Extremely fast";
   }
}