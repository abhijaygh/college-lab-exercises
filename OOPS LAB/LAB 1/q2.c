#include <stdio.h>
 
int main(void) {
	// your code goes here
	int a,b=0;
	scanf("%d",&a);
	while(a>0)
	{
		b++;
		a=a/10;
	}
	printf("%d",b);
	return 0;
}