#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i, j;
		int M;
		int cards[4][14] = {0};

		char color[2];
		int number;
		int counter = 0;

		for (i = 0; i < N; i++) {
			scanf("%s %d", color, &number);
			if (color[0] == 'S') cards[3][number] = 1;
			else if (color[0] == 'H') cards[2][number] = 1;
			else if (color[0] == 'D') cards[1][number] = 1;
			else if (color[0] == 'C') cards[0][number] = 1;
		}

		scanf("%d", &M);

		for (i = 13; i >= 1; i--) {
			for (j = 3; j >= 0; j--) {
				if (cards[j][i] == 1) counter++;
				if (counter == M) break;
			}
			if (counter == M) break;
		}

		if (j == 3) printf("S %d", i);
		else if (j == 2) printf("H %d", i);
		else if (j == 1) printf("D %d", i);
		else if (j == 0) printf("C %d", i);


	}

	return 0;
}
