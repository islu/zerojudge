#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, j, A, B, C;
		for (i = 0; i < N; i++) {
			scanf("%d%d%d", &A, &B, &C);
			int flag = 0;
			for (j = A+1; j < B; j++) {
				if (j % C != 0) {
					printf("%d ", j);
					flag = 1;
				}
			}
			
			if (flag == 0) printf("No free parking spaces.\n");
			else printf("\n");
		}
	}
	return 0;
}
