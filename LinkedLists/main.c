#include <stdio.h>
#include "SinglyLinkedList.h"

int main()
{
	SinglyList *list;

	list = createSinglyList();
	printf("list's address is: %p",list);
	return 0;
}
