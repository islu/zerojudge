#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		char can1[50], can2[50];
		int S, V1, V2, i;
		long long ans = 0;
		scanf("%s %s", can1, can2);
		for (i = 0; i < N; i++) {
			scanf("%d %d %d", &S, &V1, &V2);
			if (V1 > V2) ans += S;
			else ans -= S;
		}
		if (ans > 0) printf("%s\n", can1);
		else if (ans < 0) printf("%s\n", can2);
		else printf("Tie\n");
	}
	return 0;
}