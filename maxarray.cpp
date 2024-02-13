#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter length Of Array : ";
    cin>>length;
    int array[length];
    for(int i=0;i < length;i++)
    {
        cout<<"Enter "<< i+1 <<" Number : ";    
        cin>>array[i];    
    }
    int max=array[1];
    for(int i=0;i<length;i++)
    if(array[i]> max)
    {
    max = array[i];
    }
    cout<<"The Maximum Number Is: "<<max;
     return 0;
}