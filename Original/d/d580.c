#include <stdio.h>
#define MAX 10001
#define R 2012

int main() {
	int T[MAX], i;
	T[0] = 1;
	T[1] = 1;
	for (i = 2; i < MAX; i++) {
		T[i] = (T[i-1]+T[i-2]) % R;
	}
	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%d\n", T[N]);
	}  
	return 0;
}