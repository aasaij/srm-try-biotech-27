#include <stdio.h>
#include <string.h>
typedef struct Student{
    int rollno;
    char name[30];
    double cgpa;
}stu;
//typedef struct Student stu;

int main(){
    stu *ptr;
    ptr->rollno = 46;
    printf("%d", ptr->rollno);
    return 0;
}

//Dynamic Memory allocation (DMA) --> stdlib.h
//	malloc()
//	calloc()
//	realloc()
//	free()
//
//function proto-types 
//	void* malloc(size_t numBytes);
//	void* calloc(size_t numBlocks, size_t blockSize);
//	void* realloc(void* oldMemory, size_t newSizeInBytes);
//	void free(void* memory);
	
	
	
	
	