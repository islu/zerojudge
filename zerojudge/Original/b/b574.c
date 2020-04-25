#include <stdio.h>

int main() {
	int K, X, C;
	int i, max = 0, count = 0;
	scanf("%d", &K);
	for (i = 0; i < K; i++) {
		scanf("%d%d", &X, &C);
		switch (C) {
			case 1:
				count++;
				break;
			case 0:
				count--;
				break;
		}
		if (max < count) max = count;
	}
	printf("%d\n", max);
	return 0;
}