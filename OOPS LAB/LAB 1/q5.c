#include <stdio.h>
 
int main(void) {
	// your code goes here
	char a[50];
	gets(a);
	int i;
	for(i=0;a[i];i++);
	printf("%d",i);
	return 0;
}