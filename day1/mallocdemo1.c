#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Student{
    int rollno;//4
    char name[22]; // 20
    double cgpa; //8
}stu;

int main(){
//	stu s[5];
	stu *s;
	int n = 5;
	s = (stu*)malloc(sizeof(stu)*n);
	
	
return 0;
}
