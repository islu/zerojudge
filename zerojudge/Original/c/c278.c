#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void quickSort(int[], int, int); 

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int A[N];
		int i;
		int min = 0;

		for (i = 0; i < N; i++)
			scanf("%d", &A[i]);

		quickSort(A,0,N-1);

		for (i = 0; i < N; i += 2) {
			min += A[i+1] - A[i];
		}

		printf("%d\n", min);

	}
	return 0;
}

int partition(int number[], int left, int right) { 
	int i = left - 1; 
	int j;
	for (j = left; j < right; j++) { 
		if (number[j] <= number[right]) { 
			i++; 
			SWAP(number[i], number[j]); 
		} 
	} 

	SWAP(number[i+1], number[right]); 
	return i+1; 
} 

void quickSort(int number[], int left, int right) { 
	if (left < right) { 
		int q = partition(number, left, right); 
		quickSort(number, left, q-1); 
		quickSort(number, q+1, right); 
	} 
}