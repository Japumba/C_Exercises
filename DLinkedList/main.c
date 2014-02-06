#include <stdio.h>
#include "DoublyLinkedList.h"

int main()
{

    DoublyList *list;
    list = createDoublyList();
	printf("list's address is: %p\n",list);
	addNode(list,1);
	addNode(list,2);
	addNode(list,3);
	printf("list's count is: %i\n",list->count);
	printList(list);


	//deleteList(list);
	return 0;
}
