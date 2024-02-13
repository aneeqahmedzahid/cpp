#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter The Length Of Array : ";
    cin>>length;
    int array[length];
    for(int i=0;i<length;i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>array[i];
    }
    int num;
    cout<<"Enter Number To Search : ";
    cin>>num;
    int loc=-1;
    for(int i=0;i<length;i++)
    {
    if(array[i]==num) 
    {
        loc=i;
    }
    }
cout<<"The Number Found At Location : "<<loc+1;
return 0;

}