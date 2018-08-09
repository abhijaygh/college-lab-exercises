#include<iostream>
using namespace std;

/* function to add fractions*/
void add(int p ,int q ,int r, int s)
{
    float m =((p*s)+(q*r))/(q*s);
    cout<<"ANSWER = "<<m;
}

/* function to subtract fractions*/
void sub(int p ,int q ,int r, int s)
{
    float m = ((p*s)-(q*r))/(q*s);
    cout<<"ANSWER = "<<m;
}

/* function to multiply fractions*/
void mul(int p ,int q ,int r, int s)
{
    float m =((p*r))/(q*s);
    cout<<"ANSWER = "<<m;
}

/* function to divide fractions*/
void div(int p ,int q ,int r, int s)
{
    float m =(p*s)/(q*r);
    cout<<"ANSWER = "<<m;
}

int main()
{
    char a,b,c;
    int p,q,r,s,m;
    do
    {
        cout<<"enter the expression to calculated = ";
        cin>>p>>a>>q>>b>>r>>c>>s;
        if (b=='+')
            add(p,q,r,s);
        else if(b=='-')
            sub(p,q,r,s);
        else if(b=='*')
            mul(p,q,r,s);
        else if(b=='/')
            div(p,q,r,s);
        else
            cout<<"\n\n\tOOPS!!! INVALID OPERATOR\n\n";
        cout<<"do you want to perform some more calculations\n press 1 else press 0 = ";
        cin>>m;
    }while(m==1);
    return 0;
}
