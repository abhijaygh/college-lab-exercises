#include <stdio.h>
int fac(int n)
{
	if(n>=1)
	return n*fac(n-1);
	else
	return 1;
}
int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	int k=fac(a);
	printf("%d",k);
	return 0;
}