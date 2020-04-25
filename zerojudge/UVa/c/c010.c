#include <stdio.h>

void insertionSort(int*, int);
void swap(int*, int*);
int number[10000];

int main()
{
	int counter = 0;
	while (scanf("%d", &number[counter]) != EOF)
	{
		counter++;
		insertionSort(number, counter);
		if (counter % 2) printf("%d\n", number[(counter/2)]);
		else printf("%d\n", (number[counter/2-1]+number[(counter/2)])/2 );
	}
	
	return 0;
}

void insertionSort(int *array, int n) {
	int i, j;
	for (i = 1; i < n; i++) {
		for (j = i; j > 0; j--) {
			if (array[j] < array[j-1]) 
				swap(&array[j], &array[j-1]);
			else break;
		}
	}
}

void swap(int *a, int *b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}