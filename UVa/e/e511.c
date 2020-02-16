#include <stdio.h>

void bubbleSort(int*, int);
void swap(int*, int*);

int main()
{
	int t;
	while (scanf("%d", &t) != EOF)
	{
		int i, j, n;
		for (i = 0; i < t; i++) {
			scanf("%d", &n);
			int x[n];
			for (j = 0; j < n; j++)
				scanf("%d", &x[j]);
			
			bubbleSort(x, n);
			
			printf("%d\n", (x[n-1]-x[0])*2);
		}
	}

	return 0;
}

void bubbleSort(int *arr, int size) {
	int i, j, times;
	
	for (i = 0; i < size - 1; i++) {
		times = 0;
		
		for (j = 0; j < size - 1 - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				swap(&*(arr+j), &*(arr+j+1));
				times++;
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
