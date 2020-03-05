#include <stdio.h>

int main() {
	int n;
	int myzero = 0;
	while (scanf("%d", &n) != EOF) {
		do {
			myzero += n / 5;
			n /= 5;
		} while (n >= 5);
		printf("%d\n", myzero);
		myzero = 0;
	}
	return 0;
}