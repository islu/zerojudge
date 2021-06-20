#include <stdio.h>

int FindEndPositionIndex(int*, int, int);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		int montaine[N];
		int startPosition;
		int endPosition;
		for (i = 0; i < N; i++) {
			scanf("%d", &montaine[i]);
		}
		scanf("%d", &startPosition);
		endPosition = FindEndPositionIndex(montaine, N, startPosition-1) + 1;
		printf("%d\n", endPosition);
	}
	return 0;
}

int FindEndPositionIndex(int* array, int size, int start) {
	int i;
	int currentValue = array[start];
	int end = start;
	int isGoRight;
	// 決定往那邊走
	if (start == size - 1) {
		isGoRight = 0;
	} else if (start == 0) {
		isGoRight = 1;
	} else {
		int rightValue = array[start+1];
		int leftValue = array[start-1];
		isGoRight = rightValue < leftValue ? 1 : 0;
	}
	if (isGoRight == 1) {
		for (i = start + 1; i < size; i++) {
			if (array[i] <= currentValue) {
				currentValue = array[i];
				end = i;
			} else {
				end = i - 1;
				break;
			}
		}
	}
	if (isGoRight == 0) {
		for (i = start - 1; i >= 0; i--) {
			if (array[i] <= currentValue) {
				currentValue = array[i];
				end = i;
			} else {
				end = i + 1;
				break;
			}
		}
	}
	return end;
}
