#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
#define SIZE 20

void upsidedown(int[][SIZE], int, int);
void rotate(int[][SIZE], int, int);

int main() {
	int R, C, M;
	while (scanf("%d%d%d", &R, &C, &M) != EOF) {
		int matrix[SIZE][SIZE], MM[M];
		int i, j;

		for (i = 0; i < R; i++)
			for (j = 0; j < C; j++)
				scanf("%d", &matrix[i][j]);

		for (i = 0; i < M; i++)
			scanf("%d", &MM[i]);

		for (i = M-1; i >= 0; i--) {
			if (MM[i] == 0) {
				rotate(matrix, R, C);
				SWAP(R, C);
			}
			else if (MM[i] == 1) upsidedown(matrix, R, C);
		}

		printf("%d %d\n", R, C);
		for (i = 0; i < R; i++) {
			for (j = 0; j < C; j++)
				printf("%d ", matrix[i][j]);
			printf("\n");
		}
	}

	return 0;
}

void upsidedown(int matrix[][SIZE], int R, int C) {
	int i, j;
	for (i = 0; i < R/2; i++)
		for (j = 0; j < C; j++)
			SWAP(matrix[i][j], matrix[R-i-1][j])
}

void rotate(int matrix[][SIZE], int R, int C)  {
	int i, j, newMatrix[C][R];
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
			newMatrix[j][i] = matrix[i][C-j-1];

	for (i = 0; i < C; i++)
		for (j = 0; j < R; j++)
			matrix[i][j] = newMatrix[i][j];
}