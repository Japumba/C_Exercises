#include <stdio.h>
#include "SinglyLinkedList.h"

int main()
{
	
	SinglyList *list;
	
	list = createSinglyList();
	printf("list's address is: %p\n",list);
	addNode(list,1);
	addNode(list,2);
	printf("list's count is: %i\n",list->count);
	printList(list);
	

	deleteList(list);
	return 0;
}
