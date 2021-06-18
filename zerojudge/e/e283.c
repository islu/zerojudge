#include <stdio.h>

int main() {
	long long N;
	while (scanf("%lld", &N) != EOF) {
		int data[4];
		int i, j;
		for (i = 0; i < N; i++) {
			for (j = 0; j < 4; j++)
				scanf("%d", &data[j]);
			if (data[0] == 0 && data[1] == 1 && data[2] == 0 && data[3] == 1) printf("A");
			else  if (data[0] == 0 && data[1] == 1 && data[2] == 1 && data[3] == 1) printf("B");
			else  if (data[0] == 0 && data[1] == 0 && data[2] == 1 && data[3] == 0) printf("C");
			else  if (data[0] == 1 && data[1] == 1 && data[2] == 0 && data[3] == 1) printf("D");
			else  if (data[0] == 1 && data[1] == 0 && data[2] == 0 && data[3] == 0) printf("E");
			else  if (data[0] == 1 && data[1] == 1 && data[2] == 0 && data[3] == 0) printf("F");
		}
		printf("\n");
	}
	return 0;
}