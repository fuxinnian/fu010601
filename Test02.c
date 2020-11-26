
#include"Test2.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void InitSort(A *a){
	a->size = 0;

	return;
}

void BubbleSort(A a){
	int i,j,t;
	for(i=1;i<a.size;i++){
		for(j=0;j<(a.size)-i;j++){
			if(a.data[j] > a.data[j+1]){
				t=a.data[j];
				a.data[j]=a.data[j+1];
				a.data[j+1]=t;
			}
		}
	}
	printsort(a);

	return;
}

void InsertSort(A a){
       	int i,j,temp;
	for(i=1;i<a.size;i++){
		temp = a.data[i];
		j = i-1;
		while(j>=0 && a.data[j]>temp){
			a.data[j+1]=a.data[j];
			j--;
		}
		a.data[j+1] = temp;
	}
	printsort(a);
	
	return;
}

void SelectSort(A a){
	int i,j,k,m;
	for(i=0;i<(a.size)-1;i++){
		m=a.data[i];
		k=i;
		for(j=i+1;j<a.size;j++)
			if(a.data[j] < m){
				m = a.data[j];
				k = j;
			}
		a.data[k] = a.data[i];
		a.data[i] = m;
	}
	printsort(a);

	return;
}

int Partition(A *a,int low,int high){
	int x = a->data[low];
	while(low < high){
		while(low<high && a->data[high]>=x)
			high--;
		if(low < high){
			a->data[low] = a->data[high];
			low++;
		}
		while(low<high && a->data[low]<=x)
			low++;
		if(low < high){
			a->data[high] = a->data[low];
			high--;
		}
	}
	a->data[low] = x;
	return low;
}
void QSort(A *a,int low,int high){
	if(low < high){
		int mid = Partition(a,low,high);
		QSort(a,low,mid-1);
		QSort(a,mid+1,high);
	}
}

void QuickSort(A a){
	QSort(&a,0,a.size-1);
	printsort(a);

	return;
}

int main(int argc,char **argv){
	int i,a.data[N];
	srand(time(0));

	for(i=0;i<N;i++)
	       a.data[N] = rand() % 100;
	printf("初始数据为；\n");

	for(i=0;i<N;i++)
		printf("%d ",a.data[i]);
	printf("\n");
	BubbleSort(*a);
	printf("冒泡排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",a.data[i]);
	printf("\n");
	InsertSort(*a);
	printf("插入排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",a.data[i]);
	printf("\n");
	SelectSort(*a);
	printf("选择排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",a.data[i]);
	printf("\n");
	QuickSort(*a);
	printf("快速排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",a.data[i]);
	printf("\n");

	return 0;
}


















