#include <stdio.h>

void bubbleSort(int*, int, int*);
void swap(int*, int*);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i, j;
		
		for (i = 0; i < N; i++) {
			int L;		
			scanf("%d", &L);
			
			int train[L];
			int counts = 0;
			
			for (j = 0; j < L; j++)
				scanf("%d", &train[j]);
			
			bubbleSort(train, L, &counts);
			
			printf("Optimal train swapping takes %d swaps.\n", counts);			
		}
	}
	
	return 0;
}

void bubbleSort(int *arr, int size, int *counts) {
	int i, j, times;
	
	for (i = 0; i < size - 1; i++) {
		times = 0;
		
		for (j = 0; j < size - 1 - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				swap(&*(arr+j), &*(arr+j+1));
				times++;
				
				*counts += 1;
			}
		}
		
		if (times == 0)
			break;
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
