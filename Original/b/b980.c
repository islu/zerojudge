#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
#define SIZE 10005

int partition(int[], int, int); 
void quickSort(int[], int, int);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int number[SIZE];
		int index = 0;
		int max = 0;
		int i;
		while (1) {
			scanf("%d", &number[index]);
			if (number[index] == -1) break;
			index++;
		}
		quickSort(number, 0, index-1);
		while (N > 0) {
			index--;
			if (index < 0) break;
			max += number[index];
			N--;
		}
		printf("%d\n", max);
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