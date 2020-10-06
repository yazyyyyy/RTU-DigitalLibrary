#include <stdio.h>
#define __STDC_LIMIT_MACROS
#include <stdint.h>

void Swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int Partition(int A[],int l,int h)
{
	int pivot=A[l];
	int i=l,j=h;
	do
	{
		do{i++;}while(A[i]<=pivot);
		do{j--;}while(A[j]>=pivot);
		if(i<j)Swap(&A[i],&A[j]);
	}while(i<j);
	Swap(&A[l],&A[j]);
	return j;
}

void QuickSort(int A[],int l,int h)
{
	int j;
	if(l<h)
	{
		j=Partition(A,l,h);
		QuickSort(A,l,j);
		QuickSort(A,j+1,h);
	}
}

int main()
{
    int A[]={23,27,1,78,54,67,43,90,INT32_MAX},n=9,i;
    printf("Before performing Quick Sort:\n");
    for(i=0;i<n-1;i++)
    	printf("%d\t",A[i]);
	QuickSort(A,0,n-1);
    printf("\nAfter performing Quick Sort:\n");
    for(i=0;i<n-1;i++)
    	printf("%d\t",A[i]);
    return 0;
}
