#include <stdio.h>
#include <stdlib.h>

int main() {
	int L, M, a, b, count;
	int i, j;
	while (scanf("%d%d", &L, &M) != EOF) {
		short *tree = (short*)calloc(L+1, sizeof(short));
		count = 0;
		for (i = 0; i < M; i++) {
			scanf("%d%d", &a, &b);
			for (j = a; j <= b; j++) {
				if (*(tree+j) == 1)
					continue;
				*(tree+j) = 1;
				count++;
			}
		}
		printf("%d\n", L + 1 - count);
		free(tree);
	}
}