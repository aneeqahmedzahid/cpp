#include<iostream>
using namespace std;
int fact(int n)
{
    //base step
    if(n==0)
    {
        return 1;
    }
    //Recursive Step
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    int r;
    r=fact(n);
    cout<<"The Factorial of "<<n<<" Is : "<<r;
    return 0;
}




