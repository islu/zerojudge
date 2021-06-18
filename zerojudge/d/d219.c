// https://liangalgorithm.blogspot.com/2013/05/uva374-big-mod.html
#include <stdio.h>

long long big_mod(int, int, int);

int main() {
	int B, P, M;
	while (scanf("%d%d%d", &B, &P, &M) != EOF) {
		printf("%lld\n", big_mod(B, P, M));
	}
	return 0;
}

long long big_mod(int B, int P, int M) {
	if (P == 0) return 1;
	else if (P == 1) return B % M;
	else {
		long long result = big_mod(B, P/2, M);
		if (P % 2) return result*result*B%M;
		else return result*result%M;
	}
}