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
    cout<<"The Number Are : ""\n";
    for(int i=0;i< length;i++)
    {
        cout<<array[i]<<"\t";
    }







    return 0;
}