#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void quickSort(int[], int, int); 

int main() 
{
	int t, n, i, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++) 
	{
		scanf("%d", &n);
		int p[n];
		long long ans = 0;
		for (j = 0; j < n; j++)
			scanf("%d", &p[j]);

		quickSort(p,0,n-1);

		for (j = n-3; j >= 0; j-=3)
			ans += p[j];

		printf("%lld\n", ans);
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