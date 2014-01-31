#ifndef FILE_SINGLY_LIST
#define FILE_SINGLY_LIST

#include <stdlib.h>

typedef struct NODE
{
	int value;
	struct NODE *next;
}Node;

typedef struct SINGLY_LIST
{
	struct NODE *head;
	int count;
}SinglyList;

Node *createNode(int value);
SinglyList *createSinglyList();
void addNode(SinglyList *list, int value);
void printList(SinglyList *list);

SinglyList *createSinglyList()
{
	SinglyList *newList;
	newList = (SinglyList*)malloc(sizeof(SinglyList));
	newList->count = 0;
	newList->head = NULL;
	return newList;
}

Node *createNode(int value)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->value = value;
	newNode->next = NULL;
	printf("New node created with value: %i.",value);
	return newNode;
}

void addNode(SinglyList *list, int value)
{
	if(list == NULL)
		return;

	Node *newNode;
	newNode = createNode(value);

	if(list->count == 0)
	{
		list->head = newNode;
		list->count++;
		printf("List is empty, adding new node.\n");
		return;
	}
	
	Node *temp = list->head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	list->count++;
	printf("Node inserted at the end of list.\n");
}

void printList(SinglyList *list)
{
	if(list == NULL)
		return;
	Node *temp = list->head;
	while(temp != NULL)
	{
		printf("[%i]\n",temp->value);
		temp = temp->next;
	}
}

#endif
