#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter First Number : ";
    cin>>x;
    cout<<"Enter Second Number : ";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"The First Number Is "<<x<<"\n";
    cout<<"The Second Number Is "<<y;
    return 0;
}