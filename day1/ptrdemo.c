//Program to demonstrate void*
#include <stdio.h>
int main(){
	
	int x = 10, *iptr;
	char c = 'A', *cptr;
	float f = 9.9, *fptr;
	iptr = &x;
	cptr = &c;
	fptr = &f;
	printf("%d\n",*iptr);
	printf("%c\n", *cptr);
	printf("%.2f\n", *fptr);
	return 0;
}