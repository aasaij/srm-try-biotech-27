//Program to implement singly linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining the node 
typedef struct Song{
	//used to store the song name
	char songName[20];
	//used to store the address of next song
	struct Song *nextSong;
}song;

song* createSong(char song[]){
	song* temp = (song *)malloc(sizeof(song));
	strcpy(temp->songName, song);
	temp->nextSong = NULL;
	return temp;
}

int main(){
	song *s1, *s2, *s3;
	s1 = createSong("ABCD");
	s2 = createSong("12345");
	s3 = createSong("67893");	
	s1->nextSong = s2;
	s1->nextSong->nextSong = s3;
}