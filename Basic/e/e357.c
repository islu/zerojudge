#include <stdio.h>

int f(int);

int main() {
	int x;
	while (scanf("%d ", &x) != EOF) {
		int ans = f(x);
		printf("%d\n", ans);
	}

	return 0;
}

int f(int x) {
	if (x == 1) return 1;
	else if (x % 2 == 0) return f(x/2);
	else return f(x-1) + f(x+1);
}