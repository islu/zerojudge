#include <stdio.h>

int serie(int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", serie(n));
	}
	return 0;
}

int serie(int n) {
	int i;
	int an = 1;
	for (i = 0; i < n; i++) {
		an += i;
	}
	return an;
}