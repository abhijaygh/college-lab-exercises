#include<iostream>
using namespace std;

void minmax( int a[],int l,int& min,int & max)
{
   for(int i=0;i<l;i++)
   {
       if(a[i]>max)
        max=a[i];
       if(a[i]<min)
        min=a[i];
   }
}
int main()
{
     int n;
    cout<<"enter the array length = ";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=a[0],y=a[0];
    minmax(a,n,x,y);
    cout<<"\nmaximum = "<<x<<"\tminimum = "<<y;
    return 0;
}
