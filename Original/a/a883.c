#include <stdio.h>

int main() {
	int S[3], E[3];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%d%d", &S[i], &E[i]);
	}
	if (S[1]<E[0] || S[2]<E[1]) printf("QQ\n");
	else printf("Happy\n");
	return 0;
}