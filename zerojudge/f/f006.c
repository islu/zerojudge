#include <stdio.h>
#include <limits.h>

int MinInt(int n1, int n2) {
	if (n1 <= n2) {
		return n1;
	}
	if (n1 > n2) {
		return n2;
	}
}

int MaxInt(int n1, int n2) {
	if (n1 <= n2) {
		return n2;
	}
	if (n1 > n2) {
		return n1;
	}
}

int main() {
	int N;
	while (scanf("%d ", &N) != EOF) {
		int i;
		int s;
		int max = INT_MIN;
		int min = INT_MAX;
		for (i = 0; i < N; i++) {
			scanf("%d", &s);
			max = MaxInt(max, s);
			min = MinInt(min, s);
		}
		printf("%d %d\n", max, min);
	}
	return 0;
}
