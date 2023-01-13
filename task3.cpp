#include<iostream>
using namespace std;
string checktitle(int age,char gender);
main()
{
    int age;
    char gender;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter gender:";
    cin>>gender;
   checktitle(age,gender);
}
string checktitle(int age,char gender)
{
    string result;
    if(age<16 && gender=='M')
    {
      cout<<"Mr.";
    } 
        if(age>16 && gender=='M')
    {
      cout<<"Master.";
    } 
        if(age<16 && gender=='F')
    {
     cout<<"Ms.";
    } 
        if(age>16 && gender=='F')
    {
      cout<<"Miss.";
    } 

}