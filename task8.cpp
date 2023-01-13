#include<iostream>
using namespace std;
float budget1(int range,string category,int num);
float budget2(int range,string category,int num);
main()
{
    int range,num;
    string category;
    cout<<"Enter your amount range:";
    cin>>range;
    cout<<"Enter number of people:";
    cin>>num;
    cout<<"Enter category:";
    cin>>category;
    float amount_after_tickets=budget1(range,category,num);
    cout<<"Yes! You have"<<amount_after_tickets<<" leva left";
    float amount_after_tickets1=budget2(range,category,num);
    cout<<"Not sufficient money! You need"<<amount_after_tickets1<<" leva";
}
float budget1(int range,string category,int num)
{
      float amount_after_tickets;
    if(category=="VIP"  && num>0 && num<=4)
    {
       float budget=range*75/100;
       float remaining_amount=budget-range;
       float ticket_price=num*499.99;
       float amount_after_tickets= ticket_price-remaining_amount;     
    }   
    else if(category=="VIP"  && num>4 && num<=9)
    {
       float budget=range*60/100;
       float remaining_amount=budget-range;
       float ticket_price=num*499.99;
       float amount_after_tickets= ticket_price-remaining_amount;    
    }   
   else if(category=="VIP"  && num>9 && num<=24)
    {
       float budget=range*50/100;
       float remaining_amount=budget-range;
       float ticket_price=num*499.99;
       float amount_after_tickets= ticket_price-remaining_amount;      
    }   
    else if(category=="VIP"  && num>24 && num<=49)
    {
       float budget=range*40/100;
       float remaining_amount=budget-range;
       float ticket_price=num*499.99;
       float amount_after_tickets= ticket_price-remaining_amount;   
    }   
    else if(category=="VIP" && num>49)
    {
       float budget=range*25/100;
       float remaining_amount=budget-range;
       float ticket_price=num*499.99;
       float amount_after_tickets= ticket_price-remaining_amount;      
    }   
     return amount_after_tickets;
}
     float budget2(int range,string category,int num)
     {
          float amount_after_tickets1;
      if(category=="Normal"  && num>0 && num<=4)
    {
       float budget=range*75/100;
       float remaining_amount=budget-range;
       float ticket_price=num*249.99;
       float amount_after_tickets1= ticket_price-remaining_amount;     
    }   
    else if(category=="Normal"  && num>4 && num<=9)
    {
       float budget=range*60/100;
       float remaining_amount=budget-range;
       float ticket_price=num*249.99;
       float amount_after_tickets1= ticket_price-remaining_amount;      
    }   
   else if(category=="Normal"  && num>9 && num<=24)
    {
       float budget=range*50/100;
       float remaining_amount=budget-range;
       float ticket_price=num*249.99;
       float amount_after_tickets1= ticket_price-remaining_amount;     
    }   
    else if(category=="Normal"  && num>24 && num<=49)
    {
       float budget=range*40/100;
       float remaining_amount=budget-range;
       float ticket_price=num*249.99;
       float amount_after_tickets1= ticket_price-remaining_amount;
    }   
    else if(category=="Normal" && num>49)
    {
       float budget=range*25/100;
       float remaining_amount=budget-range;
       float ticket_price=num*249.99;
       float amount_after_tickets1= ticket_price-remaining_amount; 
    }   
     return amount_after_tickets1;     
}