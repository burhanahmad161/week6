#include<iostream>
using namespace std;
int isGreater(int num1,int num2,int num3);
main()
{
   int num1,num2,num3;
   cout<<"Enter 1st number";
   cin>>num1;
   cout<<"Enter 2nd number";
   cin>>num2;
   cout<<"Enter 3rd number";
   cin>>num3;
   int greater= isGreater(num1,num2,num3);
}
int isGreater(int num1,int num2,int num3)
{
    int greater;
   if(num1>num2 && num1>>num3)
   {
    cout<<"Number 1 is greater"<<num1;
   }
     if(num2>num1 && num2>>num3)
   {
    cout<<"Number 2 is greater"<<num2;
   }
   else
   {
      cout<<"NUmber 3 is greater"<<num3;      
   }
   return greater;
}