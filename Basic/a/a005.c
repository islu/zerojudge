#include <stdio.h>

int main() {
	int t;
	int i;
	int a0, a1, a2, a3;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf ("%d%d%d%d", &a0, &a1, &a2, &a3);
		if (a1-a0 == a2-a1) printf("%d %d %d %d %d\n", a0, a1, a2, a3, a2-a1+a3);
		else printf("%d %d %d %d %d\n", a0, a1, a2, a3, a2/a1*a3);
	}
	return 0;
}