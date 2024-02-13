#include<iostream>
using namespace std;
void inputarray(int a[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<"Enter"<<i+1<<"Element: ";
        cin>>a[i];
    }
}
float avg(int a[],int l)
{
    float s=0.0;
    for(int i=0;i<l;i++)
    {
        s=s+a[i];
        
    }
    
    return s/l;
}
int main()
{
    int length;
    cout<<"Enter Length Of Array : ";
    cin>>length;
    int a[length];
    inputarray(a,length);
    float r=avg(a,length);
    cout<<"The Average Is: "<<r;
    return 0;
}