#include <stdio.h>
#define AllowedDays 100
#define FinePerDay 5

int Partiton(int *, int, int);
void QuickSort(int*, int, int);
void Swap(int*, int*);

struct LibraryCard {
	int S; // 書本編號
	int D; // 已借閱幾天
};
typedef struct LibraryCard LibraryCard;

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		int totalFine = 0;
		int books[N];
		int booksIndex = 0;
		LibraryCard cards[N];
		for (i = 0; i < N; i++) {
			scanf("%d%d", &cards[i].S, &cards[i].D);
			if (cards[i].D > AllowedDays) {
				totalFine += (cards[i].D - AllowedDays) * FinePerDay;
				books[booksIndex] = cards[i].S;
				booksIndex += 1;
			}
		}
		QuickSort(books, 0, booksIndex-1);
		for (i = 0; i < booksIndex; i++) {
			printf("%d ", books[i]);
		}
		if (booksIndex != 0) {
			printf("\n");
		}
		printf("%d\n", totalFine);
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
