#include<iostream>
using namespace std;
unsigned long fact(int n)
{
    unsigned long result;
    for(int i=0;i<n;i++)
    {
        n=n*i;
    }
    return n;
}
int main()
{
    int n;
    cout<<"Enter Number To Find Factorial : ";
    cin>>n;
    unsigned long result = fact(n);
    cout<<"The Factorial Of Number "<<n<<" Is : "<<result;
    return 0;
}