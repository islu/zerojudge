#include <stdio.h>
#define SIZE 2000

int abs(int);
int compare(int, int);

int main()
{
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF)
	{
		int ans[M], door[N][SIZE], code[N][M];
		int i, j;
		int ansIndex = N-1;

		for (i = 0; i < M; i++)
			scanf("%d", &ans[i]);

		for (i = 0; i < N; i++)
			for (j = 0; j < M+1; j++)
				scanf("%d", &door[i][j]);

		for (i = 0; i < N; i++) {
			int counter = M-1;
			code[i][counter] = compare(door[i][M], door[i][M-1]);
			counter--;
			for (j = M; j > 1; j--) {
				int temp = door[i][j] - door[i][j-1];
				temp = abs(temp);
				code[i][counter] = compare(temp, door[i][j-2]);
				counter--;
			}
		}

		for (i = 0; i < N; i++) {
			int counter = 0;
			for (j = 0; j < M; j++) {
				if (code[i][j] == ans[j]) counter++;	
			}
			if (counter == M) {
				ansIndex = i;
				break;
			}
		}

		for (i = 0; i < M+1; i++)
			printf("%d ", door[ansIndex][i]);
		printf("\n");
	}

	return 0;
}

int abs(int a) {
	if (a >= 0) return a;
	else if (a < 0) return a*(-1); 
}

int compare(int a, int b) {
	if (a >= b) return 1;
	else if (a < b) return 0;
}
