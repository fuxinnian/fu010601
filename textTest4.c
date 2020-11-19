#include "Test4.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);

	inserList(list,1,1);
	inserList(list,1,3);
	inserList(list,2,2);
	inserList(list,4,0);

	printList(list);
	printf("第%d个元素是&d\n",2,getList(list,2));

	delList(list,2);
	printList(list);

	return 0;
}

