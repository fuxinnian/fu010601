#ifndef Test4_h
#define Test4_h

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
}List;

void addHead(List *, DataType):
void initList(List *);
int sizeList(List *);
void insetList(List *, int,DataType);
void dalList(List &, int);
void isEmoty(List *);
DataType getdata(List *, int);
Node* find(List *,DataType);
void printfList(List *);
void clearList(List *);

#endif


