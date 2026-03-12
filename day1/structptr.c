#include <stdio.h>
#include <string.h>
typedef struct Student{
    int rollno;
    char name[30];
    double cgpa;
}stu;
//typedef struct Student stu;

int main(){
    stu s1;
    stu *ptr;
    ptr = &s1;
    ptr->rollno = 41;
    strcpy(ptr->name, "Suraj");
    (*ptr).cgpa = 10.00;
    return 0;
}