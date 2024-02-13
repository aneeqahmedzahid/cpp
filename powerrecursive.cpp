#include<iostream>
using namespace std;
int pow(int a,int n)
{
    //base step
    if(n==0)
    {
        return 1;
    }
    //Recursive Step
    else
    return a*pow(a,n-1);
    
}
int main()
{
    int a,n;
    cout<<"Enter The Base Number : ";
    cin>>a;
    cout<<"Enter Power Of Number : ";
    cin>>n;
    int r;
    r=pow(a,n);
    cout<<"The Answer Is : "<<r;
    return 0;
}