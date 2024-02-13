#include<iostream>
using namespace std;
int main()
{
    int number,length;
        cout<<"Enter The Number : ";
        cin>>number;
        cout<<"Enter The Length Of Table : ";
        cin>>length;
        for(int i=0;i<=length;i++)
        {
            cout<<number<<"X"<<i<<"="<<number*i<<"\n";
        }

 return 0;
}