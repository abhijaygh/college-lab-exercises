#include<iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;
int main()
{
    char* list[50];
    int l,n,k,m;
    do
    {
        cout<<"1. enter student name\n2. delete student name\n3. print student names present on the database\n4.exit\nenter choice = ";
        cin>>k;
        switch(k)
        {
            case 1:
                cout<<"\nenter the number of the names to be entered = ";
                cin>>n;
                    for(int i=0;i<n;i++)
                    {
                        list[i]=(char*)malloc(50);
                    }
                    for(int i=0;i<n;i++)
                    {
                        fflush(stdin);
                        gets(list[i]);
                        u++;
                    }
                cout<<endl;
                cout<<"the names of student on the database are = ";
                cout<<endl;
                for(int i=0;i<n;i++)
                {
                    puts(list[i]);
                    cout<<endl;
                }
                break;
            case 2:
                cout<<"\nenter the position of record to be deleted = ";
                cin>>l;
                m=l-1;
                for(int i=m;i<n-1;i++)
                    list[i]=list[i+1];
                list[n-1]='\0';
                for(int i=0;i<n;i++)
                {
                    puts(list[i]);
                    cout<<endl;
                }
                break;
            case 3:
                for(int i=0;i<n;i++)
                {
                    puts(list[i]);
                    cout<<endl;
                }
                break;
            case 4:
                exit(0);
        }
    }while(k!=4);
    return 0;
}
