#ifndef FILE_SINGLY_LIST
#define FILE_SINGLY_LIST

#include <stdlib.h>

typedef struct NODE
{
	int value;
	struct NODE *next;
}Node

typedef struct SINGLY_LIST
{
	struct NODE *head;
	int count;
}SinglyList

SinglyList *createSinglyList()
{
	SinglyList *newList;
	newList = (SinglyList*)malloc(sizeof(SinglyList));
	newList->count = 0;
	newList->head = NULL;
	return newList;
}

#endif
