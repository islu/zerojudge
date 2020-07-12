#include <stdio.h>
#define SIZE 9

void bubble_sort(int*, int);
void swap(int*, int*);

int main() {
	int id;
	while (scanf("%d", &id) != EOF) {
		int n[SIZE] = {0};
		int c1 = id % 1000;
		int c2, i;
		for (i = SIZE-1; i >= 0; i--) {
			n[i] = id % 10;
			id /= 10;
		}
		bubble_sort(n, SIZE);
		c2 = n[SIZE-1]*n[SIZE-1] + n[SIZE-2]*n[SIZE-2];
		
		if (c1 == c2) printf("Good Morning!\n");
		else printf("SPY!\n");
	}
	
	return 0;
}

void bubble_sort(int *arr, int size) {
	int i, j, times;
	for (i = 0; i < size - 1; i++) {
		times = 0;
		for (j = 0; j < size - 1 - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				swap(&*(arr+j), &*(arr+j+1));
				times++;
			}
		}
		if (times == 0) break;
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}