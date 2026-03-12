#include <stdio.h>
#include <stdlib.h>
typedef struct Student{
    int rollno;//4
    char name[22]; // 20
    double cgpa; //8
}stu;
int main(){
    stu *ptr1, *ptr2;
    ptr1 = (stu*)malloc(sizeof(stu));
    ptr2 = (stu*)calloc(1,sizeof(stu));
    free(ptr1);
    free(ptr2);
    return 0;
}