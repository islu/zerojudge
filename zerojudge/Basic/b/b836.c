#include <stdio.h>

int main() {
	long long int n;
	long long int m;
	while (scanf("%lld%lld", &n, &m) != EOF) {
		if (m > 0 && (n-1)%m == 0) printf("Go Kevin!!\n");
		else if (n == 0 || m == 0 || n == 1) printf("Go Kevin!!\n");
		else printf("No Stop!!\n");
	}
	return 0;
}