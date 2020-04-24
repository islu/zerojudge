#include <stdio.h>

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		if (m == n) printf("= =\"\n");
		else printf(">\\\\\\<\n");
	}
	return 0;
}