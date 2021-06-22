#include <stdio.h>
#include <limits.h>

int minInt(int, int);
int maxInt(int, int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j;
		int k;
		int chains[n];
		// 找出鍊條中最小的強度
		for (i = 0; i < n; i++) {
			scanf("%d", &k);
			int minStong = INT_MAX;
			for (j = 0; j < k; j++) {
				int strong;
				scanf("%d", &strong);
				minStong = minInt(minStong, strong);
			}
			chains[i] = minStong;
		}
		// 找出最強的鍊條
		int bestChainStrong = INT_MIN;
		for (i = 0; i < n; i++) {
			bestChainStrong = maxInt(bestChainStrong, chains[i]);
		}
		printf("%d\n", bestChainStrong);
	}
	return 0;
}

int minInt(int n1, int n2) {
	if (n1 <= n2) {
		return n1;
	}
	if (n1 > n2) {
		return n2;
	}
}
int maxInt(int n1, int n2) {
	if (n1 <= n2) {
		return n2;
	}
	if (n1 > n2) {
		return n1;
	}
}
