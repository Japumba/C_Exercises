#include <stdio.h>
#include "DoublyLinkedList.h"

int main()
{

    DoublyList *list;
    list = createDoublyList();
	printf("list's address is: %p\n",list);
	addNode(list,8);
	addNode(list,2);
	addNode(list,3);
	addNode(list,4);
    addNode(list,2);
	addNode(list,3);
	addNode(list,9);

	printf("list's count is: %i\n",list->count);
	printList(list);
    delList(list);
    printList(list);

	return 0;
}
