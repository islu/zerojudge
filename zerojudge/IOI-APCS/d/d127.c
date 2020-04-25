#include <stdio.h>

int main() {
	long long L;
	while (scanf("%lld", &L) != EOF) {
		if ((L/2)%2 == 0) printf("%lld\n", (L/4)*(L/4));
		else printf("%lld\n", (L/4)*(L/4+1));
	}
	return 0;
}