#include<iostream>
using namespace std;
float grade1(float marks);
main()
{
   float marks;
   cout<<"Enter marks:";
   cin>>marks;
 char grade=grade1(marks);
 cout<<"Grade is:"<<grade;
}
float grade1(float marks)
{
    char grade;
    if(marks<50)
    {
        grade='F';
    }
    else if(marks>=50 && marks<60)
    {
        grade='E';
    }
      else if(marks>61 && marks<70)
    {
        grade='D';
    }
         else if(marks>=71 && marks<80)
    {
        grade='C';
    }
         else if(marks>=90 && marks<85)
    {
        grade='B';
    }
    else if(marks>85 && marks<=100)
    {
       grade='A';
    }
  return grade;
}