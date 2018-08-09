#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    	int k=i%j;
    	if(k==0)
    	{
    		printf("%d",i+j);
    	}
    	else
    	{
    		i=i+(j-k);
    		printf("\n%d",i);
    	}
}