#include <stdio.h>

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		while (n != m) {
			if (n > m) n -= m;
			else m -= n;
		}
		printf("%d\n", m);
	}
	return 0;
}