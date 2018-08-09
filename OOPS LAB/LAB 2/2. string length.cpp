#include<iostream>
#include<stdio.h>
#define m 1000000000
using namespace std;
int stringlength(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}
int main()
{
    char c[m];
    cout<<"enter a string = ";
    gets(c);
    int l=stringlength(c);
    cout<<"the length of the string entered = "<<l<<endl;
    return 0;
}
