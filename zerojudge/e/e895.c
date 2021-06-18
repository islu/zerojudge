#include <stdio.h>
#define MOD 10007
#define MAX 100001

int main() {
	int i, L, dp[MAX];
	dp[0] = 0;
	dp[1] = 1;
	for (i = 2; i < MAX; i++) {
		dp[i] = dp[i-1] * 2 % MOD;
	}
	while (scanf("%d", &L) != EOF) {
		printf("%d\n", dp[L]);
	}
	return 0;
}
