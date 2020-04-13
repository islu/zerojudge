#include <stdio.h>

int find_max_number(int*, int);

int main() {
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF) {
		int i, j, number[N][M], max[N], sum, flag;
		sum = 0;
		flag = 0;
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				scanf("%d", &number[i][j]);
			}
			max[i] = find_max_number(number[i], M);
			sum += max[i];
		}

		printf("%d\n", sum);
		for (i = 0; i < N; i++) {
			if (sum % max[i] == 0) {
				printf("%d ", max[i]);
				flag++;
			}
		}

		if(flag == 0) printf("-1\n");
		else printf("\n");
	}
	return 0;
}

int find_max_number(int *ary, int size) {
	int i, max;
	max = 0;
	for (i = 0; i < size; i++) {
		if(max < ary[i])
			max = ary[i];
	}
	return max;
}