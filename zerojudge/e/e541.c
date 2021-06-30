#include <stdio.h>

int Partiton(int*, int, int);
void QuickSort(int*, int, int);
void Swap(int*, int*);

int main() {
	int N, Q;
	int C = 1;
	while (scanf("%d%d", &N, &Q) != EOF) {
		if (N == 0 && Q == 0) {
			break;
		}
		int i, j;
		int stones[N];
		int querys[Q];
		for (i = 0; i < N; i++) {
			scanf("%d", &stones[i]);
		}
		for (i = 0; i < Q; i++) {
			scanf("%d", &querys[i]);
		}
		QuickSort(stones, 0, N-1);
		
		printf("CASE# %d:\n", C);
		for (i = 0; i < Q; i++) {
			int isFound = 0;
			for (j = 0; j < N; j++) {
				if (querys[i] == stones[j]) {
					isFound = 1;
					break;
				}
			}

			if (isFound) {
				printf("%d found at %d\n", querys[i], j+1);
			} else {
				printf("%d not found\n", querys[i]);
			}
		}
		C += 1;
	}
	return 0;
}

void QuickSort(int *array, int left, int right) {
	if (left < right) {
		int p = Partiton(array, left, right);
		QuickSort(array, left, p-1);
		QuickSort(array, p+1, right);
	}
}

int Partiton(int *array, int left, int right) {
	int i = left - 1;
	int j;
	for (j = left; j < right; j++) {
		if (array[j] <= array[right]) {
			i++;
			Swap(&array[i], &array[j]);
		}
	}
	Swap(&array[i+1], &array[right]);
	return i + 1;
}

void Swap(int *a, int *b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}
