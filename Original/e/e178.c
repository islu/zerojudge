#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void quickSort(int[], int, int);
int findPosNumber(int[], int);

int main() {
	int n, k;
	while (scanf("%d%d", &n, &k) != EOF) {
		int cards[n];
		int i, ans, posIndex;
		for (i = 0; i < n; i++)
			scanf("%d", &cards[i]);

		quickSort(cards,0,n-1);

		ans = 0;
		posIndex = findPosNumber(cards,n);
		
		for (i = 0; i < n; i++) {
			if (cards[i]<0 && k!=0) {
				ans += cards[i] * -1;
				k--;
			}
			else ans += cards[i];
		}

		if (k % 2 != 0) {
			if (posIndex == -1) ans += cards[n-1] * 2;
			else if (posIndex == 0) ans -= cards[posIndex] * 2;
			else if (cards[posIndex-1] * (-1) <= cards[posIndex]) ans += cards[posIndex-1] * 2;
			else ans -= cards[posIndex] * 2;
		}
		printf("%d\n", ans);
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

int findPosNumber(int number[], int size) {
	int i;
	for (i = 0; i < size; i++)
		if (number[i] >= 0)
			return i;

	return -1;
}