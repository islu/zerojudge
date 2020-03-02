#include <stdio.h>

int reverse(int);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, n, max, rev;
		max = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &n);
			rev = reverse(n);
			if (max < rev) 
				max = rev;
		}
		printf("%d\n", max);
	}
	return 0;
}

int reverse(int n) {
	int rev = 0;
	while (n > 0) {
		rev = rev*10 + n%10;
		n /= 10;
	}
	return rev;
}