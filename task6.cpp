#include<iostream>
using namespace std;
float lowest_price(int distance,string time_of_day);
main()
{
   int distance;
   string time_of_day;
   cout<<"Enter distance:";
   cin>>distance;
   cout<<"Enter time of day:";
   cin>>time_of_day;
   float fare=lowest_price(distance,time_of_day);
   cout<<"Cheapest travel fare is:"<<fare;
}
float lowest_price(int distance,string time_of_day)
{
  float fare;
  if(time_of_day=="day" && distance<20)
  {
    fare=0.7+0.79*distance;
  }
  else if(time_of_day=="night" && distance<20)
  {
    fare=0.7+0.90*distance;
  }
  else if(distance>20  && time_of_day=="day" || time_of_day=="night")
  {
    fare=0.06*distance;
  }
  else if(distance<21&& time_of_day=="day" || time_of_day=="night")
  {
    fare=0.09*distance;
  }
  return fare;
}
