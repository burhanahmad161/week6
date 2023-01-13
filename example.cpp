#include<iostream>
using namespace std;

main()
{
    int price;
    cout<<"Enter a number:";
    cin>>price;
    string brand;
    cout<<"Enter Brand name:";
    cin>>brand;
    if(price<=1500 && brand=="outfitters")
    {
        cout<<"GOOD!";
    }
    else
     {
        cout<<"Not good";
     }
}