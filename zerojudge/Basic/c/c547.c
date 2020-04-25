#include <stdio.h>
#define SIZE 10010
#define MOD 1000000007

int main() {
	int i, n[SIZE];
	n[0] = 0;
	n[1] = 1;
	n[2] = 1;
	for (i = 3; i < SIZE; i++)
		n[i] = (n[i-2] + n[i-1]) % MOD; 

	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%d\n", n[N+1]);
	}
	return 0;
}