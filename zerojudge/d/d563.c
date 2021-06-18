#include <stdio.h>

int main() {
	int n;
	int i;
	int A[100000];
	while(scanf("%d", &n) !=EOF) {
		int pre = 0;
		int suf = n-1;
		int presum = 0;
		int sufsum = 0;
		int count = 0;
		for (i = 0; i < n; i++)
			scanf("%d", &A[i]);

		presum += A[pre];
		sufsum += A[suf];
		do {
			if (presum < sufsum) {
				pre++;
				presum += A[pre];
			}
			else if (presum > sufsum) {
				suf--;
				sufsum += A[suf];
			}
			else {
				pre++;
				presum += A[pre];
				suf--;
				sufsum += A[suf];
				count++;
			}
		} while(pre < n && suf >= 0);
		printf("%d\n", count);
	}
	return 0;
}