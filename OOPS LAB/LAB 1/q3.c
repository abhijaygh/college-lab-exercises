#include <stdio.h>

int main(void) {int i;
	// your code goes here
	for(i=33;i<=99;i++)
	{
		int n=i*i;
		int a=n%10;
		n=n/10;
		int b=n%10;
		n=n/10;
		int c=n%10;
		n=n/10;
		int d=n%10;
		if(a==b && c==d)
		printf("%d",i*i);
	}
	return 0;
}
