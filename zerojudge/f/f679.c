#include <stdio.h>

int SimpleBinarySearch(int[], int, int);

int main() {
	int N, Q;
	while (scanf("%d%d", &N, &Q) != EOF) {
		int i = 0;
		int x[N], T;
		for (i = 0; i < N; i++) {
			scanf("%d", &x[i]);
		}
		for (i = 0; i < Q; i++) {
			scanf("%d", &T);
			int result = SimpleBinarySearch(x, N, T);
			if (result == -1) {
				printf("No\n");
			} else {
				printf("Yes\n");
			}
		}
	}
	return 0;
}

int SimpleBinarySearch(int array[], int size, int target) {
	int left = 0;
	int right = size - 1;
	while (left <= right ) {
		int middle = (left + right) / 2;
		if (array[middle] == target) {
			return middle;
		} else if (array[middle] > target) {
			right = middle - 1;
		} else if (array[middle] < target) {
			left = middle + 1;
		}
	}
	return -1;
}
