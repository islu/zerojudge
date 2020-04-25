#include <stdio.h>

int main()
{
	int T;
	int i;
	int G, L;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d%d", &G, &L);
		if (!(L%G)) printf("%d %d\n", G, L);
		else printf("-1\n");
	}
	return 0;
}