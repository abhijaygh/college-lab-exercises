#include<iostream>
#include<stdio.h>
using namespace std;
struct part
{
    char name[4];
    int mfy;
    int q;
    char material[50];
};
int main()
{
    struct part A[60];
    cout<<"Please enter the data\n\n";
    for(int i=0;i<60;i++)
    {
        cout<<"Enter the part code (e.g. AA0) = ";
        gets(A[i].name);
        cout<<endl;
        cout<<"\nEnter the year of manufacture = ";
        cin>>A[i].mfy;
         cout<<endl;
        cout<<"\nEnter the quantity = ";
        cin>>A[i].q;
    }
    for(int i=12;i<=28;i++)
    {
        cout<<"Part code = ";
        cout<<A[i].name;
        cout<<endl;
        cout<<"\nEnter the year of manufacture = ";
        cout<<A[i].mfy;
         cout<<endl;
        cout<<"\nEnter the quantity = ";
        cout<<A[i].q;
    }
}
