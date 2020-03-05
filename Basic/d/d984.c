#include <stdio.h>

int main() {
	long long a, b, c;
	while (scanf("%lld%lld%lld", &a, &b, &c) != EOF) {
		if (a>=b & a>=c) {
			if (b+c<a) printf("A\n");
			else b > c ? printf("B\n") : printf("C\n");
		}
		else if (b>=a & b>=c) {
			if (a+c<b) printf("B\n");
			else a > c ? printf("A\n") : printf("C\n");
		}
		else if (c>=b & c>=a) {
			if (b+a<c) printf("C\n");
			else b > a ? printf("B\n") : printf("A\n");
		}
	}
	return 0;
}