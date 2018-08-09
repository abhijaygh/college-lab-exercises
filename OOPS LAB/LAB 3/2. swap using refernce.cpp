#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int k=a;
    a=b;
    b=k;
}
int main()
{
    int x,y;
    cout<<"enter the numbers to be swapped = ";
    cin>>x>>y;
    swap(x,y);
    cout<<"the swapped numbers = "<<x<<" and "<<y;

}
