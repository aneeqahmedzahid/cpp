//sum of first ten even numbers

#include<iostream>
using namespace std;
int main()
{
    int prod=1;
    int l=10;
    for(int i=0;i<=l;i++)
    {
        prod=prod*(2*i);
    }
cout<<prod;
return 0;
}


