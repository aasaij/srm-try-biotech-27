#include <stdio.h>

int main(){
	int x = 100;
	int *ptr;
	ptr = &x;
	*ptr = 212;
	printf("%d\n", x);
	printf("%d\n", *ptr);
	printf("%p", ptr);
	return 0;
}