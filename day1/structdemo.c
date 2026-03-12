#include <stdio.h>
#include <string.h>
struct Student{
    int rollno;
    char name[30];
    double cgpa;
};

int main(){
//	struct Student s1, s2, s3;
	//Array of structures
	struct Student s[50];
    s[0].rollno = 41;
    strcpy(s[0].name, "Suraj");
    s[0].cgpa = 10.0;
    s[1].rollno = 53;
    strcpy(s[1].name, "Yuvan");
    s[1].cgpa = 10.0;    
    return 0;
}