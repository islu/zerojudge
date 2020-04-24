#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void quickSort(int[], int, int); 

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		int i, j, p[n], sum, count;
		
		for (i = 0; i < n; i++)
			scanf("%d", &p[i]);

		sum = 0;
		count = 0;

		quickSort(p, 0, n-1);

		for (i = n-1; i >= 0; i--) {
			sum += p[i];
			count++;
			if (sum >= m)
				break;
		}

		if (sum >= m) printf("%d\n", count);
		else printf("OAQ\n");
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