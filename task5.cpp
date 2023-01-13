#include<iostream>
using namespace std;
float totalIncome(string screen,int rows,int columns);
main()
{
    string screen;
    int rows,columns;
    cout<<"Enter screen type:";
    cin>>screen;
    cout<<"Enter rows:";
    cin>>rows;
    cout<<"Enter columns:";
    cin>>columns;
    float result=totalIncome(screen,rows,columns);  
    cout<<"Price is:"<<result;
}
float totalIncome(string screen,int rows,int columns)
{
   float result;
   float price;
   if(screen=="Premiere")
   {
    price=(rows*54)+(columns*75);
    price=result;
   }
   else if(screen=="normal")
   {
    price=(rows*50)+(columns*76.69);
    price=result;
   }
     else if(screen=="normal")
   {
    price=(rows*50)+(columns*76.69);
    price=result;
   }
     else if(screen=="discount")
   {
    price=(rows*0.2380)+(columns*0.38);
    price=result;
   }
   return result;
}