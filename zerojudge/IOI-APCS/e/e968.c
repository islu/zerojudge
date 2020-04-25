#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, t1, t2, t3;
		scanf("%d%d%d", &t1, &t2, &t3);
		for (i = N; i > 0; i--) {
			if (i == t1 || i == t2 || i == t3) continue;
			printf("No. %d", i);
			if (i != 1) printf("\n");
		}
	}
	return 0;
}
