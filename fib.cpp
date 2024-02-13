#include<iostream>
using namespace std;
int fib(int n)
{
    //base step
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    //recursive step
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int l=5;
    int a[l]={0,1,1,2,3,5};
    int n;
    cout<<"Enter Location Of Array : ";
    cin>>n;
    int r=0;
    r=fib(n);
    cout<<"The Integer Inside Location "<<n<<" Is : "<<r;
    return 0;
}