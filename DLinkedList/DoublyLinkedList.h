#ifndef FILE_SINGLY_LIST
#define FILE_SINGLY_LIST

#include <stdlib.h>

typedef struct NODE
{
    struct NODE *prev;
	int value;
	struct NODE *next;

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
void delList(DoublyList *list);
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
	newNode->prev = NULL;
	printf("New node created on doubly list with value: %i.",value);
	return newNode;
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
	{
		temp = temp->next;

    }

    newNode->prev = temp;
	temp->next = newNode;
	list->count++;
	printf("Node %i inserted at the end of Doubly list.\n", temp);
    printf("previous node is: %i \n",temp->prev  );
}

void delList(DoublyList *list)
{
	if(list == NULL)
		return;
	Node *temp = list->head;
	Node *temp2 = list->head;
	while(temp != NULL)
	{
	    printf("Borrando: %i \n",temp->value);
		temp2 = temp;
		temp = temp->next;
		temp2->next = NULL;
		temp2->prev = NULL;
		temp2->value = 0;
		free(temp2);
	}
}

void printList(DoublyList *list)
{
	if(list == NULL)
		return;
	Node *temp = list->head;
	while(temp != NULL)
	{
	    printf(" [%i] ",temp->prev);
	    printf(" [%i] ",temp->value);
		printf(" [%i] \n",temp->next);
		temp = temp->next;
	}
}

#endif
