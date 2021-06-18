#include <stdio.h>

int main() {
	int i, N, T;
	int day = 0;
	int n = 0;
	scanf("%d%d", &N, &T);
	while (n != T) {
		n *= 2;
		n += N;
		day++;
	}
	printf("%d\n", day);
	
	return 0;
}
