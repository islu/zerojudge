#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
#define ABS(x) (x > 0 ? x : x * -1)

int partition(int[], int, int); 
void quickSort(int[], int, int);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, j, m, distance;
		
		for (i = 0; i < N; i++) {
			scanf("%d", &m);
			int a[m];

			for (j = 0; j < m; j++)
				scanf("%d", &a[j]);

			quickSort(a, 0, m-1);

			distance = 0;

			for (j = 0; j < m; j++) {
				int temp = a[j] - a[m/2];
				distance += ABS(temp);
			}

			printf("%d\n", distance);
		}	
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