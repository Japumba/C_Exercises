#ifndef FILE_SINGLY_LIST
#define FILE_SINGLY_LIST

#include <stdlib.h>

typedef struct NODE
{
	int value;
	struct NODE *next;
	struct NODE *prev;
}Node;

typedef struct DOUBLY_LIST
{
	struct NODE *head;
	int count;
}DoublyList;

Node *createNode(int value);
DoublyList *createDoublyList();
void addNode(DoublyList *list, int value);
void printList(DoublyList *list);

DoublyList *createDoublyList()
{
	DoublyList *newList;
	newList = (DoublyList*)malloc(sizeof(DoublyList));
	newList->count = 0;
	newList->head = NULL;
	return newList;
}

Node *createNode(int value)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->value = value;
	newNode->next = NULL;
	printf("New node created on doubly list with value: %i.",value);
	return newNode;
}
void isFirst(DoublyList *list)
{

}

void addNode(DoublyList *list, int value)
{
	if(list == NULL)
		return;

	Node *newNode;
	newNode = createNode(value);

	if(list->count == 0)
	{
		list->head = newNode;
		list->count++;
		printf("Doubly list is empty, adding new node.\n");
		return;
	}

	Node *temp = list->head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	list->count++;
	printf("Node inserted at the end of Doubly list.\n");
}

void printList(DoublyList *list)
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
