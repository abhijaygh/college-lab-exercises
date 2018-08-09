#include<iostream>
using namespace std;

void display(int n)
{
    for(int i=0;i<n;i++)
        cout<<"WELL DONE"<<endl;
}
int main()
{
    int n;
    cout<<"enter the number of times you want to print = ";
    cin>>n;
    display(n);
    return 0;
}
