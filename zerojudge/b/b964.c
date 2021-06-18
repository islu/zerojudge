#include <stdio.h>

int main() {
	int n;
	int i, j;
	int c=0;
	while (scanf("%d", &n) != EOF) {
			if (c != 0) printf("\n");
			int score[30] = {0};
			int worst =- 1;
			int best = 101;
			for (i = 0; i < n; i++) {
				scanf("%d", &score[i]);
			}
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (score[j] > score[j+1]) {
						// swap
						int temp = 0;
						temp = score[j];
						score[j] = score[j+1];
						score[j+1] = temp;
					}
				}
			}
			for (i = 0; i < n; i++) {
				printf("%d", score[i]);
				if (i != n - 1) printf(" ");
			}
			printf("\n");
			for (i = 0; i < n; i++) {
				if (score[i]<60 && score[i]>worst) worst=score[i];
				else if (score[i]>=60 && score[i]<best) best=score[i];
			}
			if (worst == -1) printf("best case\n");
			else printf("%d\n", worst);
			if (best == 101) printf("worst case");
			else printf("%d", best);
			c++;
	}
	return 0;
}