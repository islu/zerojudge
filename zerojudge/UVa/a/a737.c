#include <stdio.h>

int partiton(int *, int, int);
void quick_sort(int*, int, int);
void swap(int*, int*);
int iabs(int, int);

int main() {
	int T, r, i, j;
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%d", &r);
			int s[r];
			int result = 0;
			for (j = 0; j < r; j++) {
				scanf("%d", &s[j]);
			}
			quick_sort(s, 0, r-1);
			
			for (j = 0; j < r; j++) {
				result += iabs(s[j], s[j/2]);
			}
			printf("%d\n", result);
		}
	}
	
	return 0;
}

void quick_sort(int *array, int left, int right) {
	if(left < right) {
		int p = partiton(array, left, right);
		quick_sort(array, left, p-1);
		quick_sort(array, p+1, right);
	}
}

int partiton(int *array, int left, int right) {
	int i = left - 1;
	int j;
	for (j = left; j < right; j++) {
		if (array[j] <= array[right]) {
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i+1], &array[right]);
	return i+1;
}

void swap(int *a, int *b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}

int iabs(int a, int b) {
	int result = a - b;
	if (result < 0) return result*(-1);
	else return result;
}
