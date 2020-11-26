#ifndef Test2_h
#define Test2_h
#include<stdio.h>
#define N 20

typedef int TypeData;

typedef struct a_{
	TypeData data[N];
	int size;
} A;

void printsort(A);
void BubbleSort(A );
void InsertSort(A );
void SelectSort(A );
int Partition(A *,int,int);
void QSort(A *,int,int);
void QuickSort(A);

#endif
