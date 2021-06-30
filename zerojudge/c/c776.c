#include <stdio.h>

int main() {
	int n, m;
	while(scanf("%d%d", &n, &m)!= EOF) {
		printf("%d\n", 6 + (m-1)*4 + (n-1)*5 + (m-1)*(n-1)*3);
	}
	return 0;
}
