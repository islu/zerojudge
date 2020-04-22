#include <stdio.h>

int main() {
	int S1, S2, T, K;
	while (scanf("%d%d%d%d", &S1, &S2, &T, &K) != EOF) {
		int i = 1;
		int fail = 1;
		while (i < K) {
			if ((S1*i)+(S2*(K-i)) == T) {
				fail = 0;
				break;	
			}
			else if (S1*i >= T) break;
			i++;
		}
		if (fail) printf("impossible\n");
		else printf("%d %d\n", i, K-i);
	}
	return 0;
}