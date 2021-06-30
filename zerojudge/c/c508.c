#include <stdio.h>

int Partiton(int*, int, int);
void QuickSort(int*, int, int);
void Swap(int*, int*);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		int numbers[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &numbers[i]);
		}
		// 排序
		QuickSort(numbers, 0, N - 1);
		// 顯示小至大數字
		for (i = 0; i < N; i++) {
			printf("%d ", numbers[i]);
		}
		printf("\n");
		// 顯示大至小數字且去掉重複
		int flag = -1;
		for (i = N - 1; i >= 0; i--) {
			if (i == N - 1) {
				printf("%d ", numbers[i]);
				continue;
			}
			if (numbers[i] != numbers[i + 1]) {
				printf("%d ", numbers[i]);
			}
		}
		printf("\n");
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
