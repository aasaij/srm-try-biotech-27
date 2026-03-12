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

song* createSong(char songName[]){
	song* temp = (song *)malloc(sizeof(song));
	strcpy(temp->songName, songName);
	temp->nextSong = NULL;
	return temp;
}
song* addFirst(song *list, char songName[]){
	song* newSong = createSong(songName);
	newSong->nextSong = list;
	list = newSong;
	return list;
}
song* addLast(song *list, char songName[]){
	song* newSong = createSong(songName);
	if (list!=NULL){
		//play list contains songs
		song* temp = list;
		//moving the temp pointer to the last song
		while(temp->nextSong != NULL)
			//moving the temp pointer to the next song
			temp = temp->nextSong;
		//now temp will be pointing the last song
		temp->nextSong = newSong;
		return list;
	}
	//play list is empty now
	return newSong;
}
song* deleteFirst(song* list){
	if (list!= NULL){
		//play list contains song(s)
		//checking whether the list contains only one song
		if (list->nextSong==NULL){
			//list contains only one song			
			free(list); //removing the memory which is allotted for the song
			return NULL;
		}
		//play list contains more than one song
		song* temp = list;
		list = list->nextSong;
		//removing the memory which is allotted for the first song
		free(temp);
	}
	return list;
}
song* deleteLast(song* list){
	if (list!= NULL){
		//list contains song(s)
		//checking whether the play list contains only one song
		if (list->nextSong==NULL){
			//list is having only one song
			//remove that list
			free(list);
			return NULL;
		}
		//list contains more then one song
		song* temp = list;
		while(temp->nextSong->nextSong!=NULL)
			temp = temp->nextSong;
		//temp is pointing to the last but second song
		free(temp->nextSong);
		temp->nextSong = NULL;
	}
	return list;
}

song* deleteAt(song* list, int position){
	//remove the first song from the list
	if (position ==0 || position == 1)
		return deleteFirst(list);
	//otherwise
	if (position > 1){
		song* temp = list;
		for (int i = 2; i<position && temp->nextSong!=NULL; i++ )
			temp = temp->nextSong;
		//checking whether the position is correct or not
		if (temp->nextSong){
			song* temp2 = temp->nextSong;
			temp->nextSong = temp2->nextSong;
			free(temp2);
		}
	}
	return list;
}
void printList(song* list){
	for (song* temp = list; temp!=NULL;temp=temp->nextSong)
		printf("%s ", temp->songName);
	printf("\n");
}

int main(){
	song *head = NULL;
	head = addFirst(head, "A");
	head = addFirst(head, "B");
	head = addFirst(head, "C");
	head = addFirst(head, "D");
	printList(head);
	head = addLast(head, "E");
	printList(head);
	head = deleteFirst(head);
	printList(head);
	head = deleteLast(head);
	printList(head);
	head = deleteAt(head, 4);
	printList(head);
	return 0;
}