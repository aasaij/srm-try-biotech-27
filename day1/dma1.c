#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Student{
    int rollno;//4
    char name[22]; // 20
    double cgpa; //8
}stu;

int main(){
//	printf("%d", sizeof(stu));
	stu *ptr;
	ptr = (stu*)malloc(sizeof(stu));
	ptr->rollno = 46;
	strcpy(ptr->name, "Sabarish");
	ptr->cgpa = 10.0;
	printf("Roll Number : %d\n", ptr->rollno);
	printf("Name        : \"%s\"\n", ptr->name);
	printf("CGPA        : %.2lf\n", ptr->cgpa);
	
	return 0;

}