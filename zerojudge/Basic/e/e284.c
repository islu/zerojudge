#include <stdio.h>
#define SIZE 32

int binary_search(int[],int,int); 

int main() {
	int dp[SIZE] = {0};
	int i, n;
	dp[0] = 1;
	dp[1] = 1;
	for (i = 2; i < SIZE; i++) {
		dp[i] = dp[i-1] * 2;
	}
	while (scanf("%d", &n) != EOF) {
		int index = binary_search(dp,SIZE,n);
		if (index == -1) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}

int binary_search(int ary[], int size, int target) {
	int L = 0;
	int R = size - 1;
	while (L <= R ) {
		int M = (L+R) / 2;
		if (ary[M] == target) return M;
		else if (ary[M] > target) R = M - 1;
		else if (ary[M] < target) L = M + 1;
	}
	return -1;
}
