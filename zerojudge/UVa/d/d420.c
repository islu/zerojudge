#include <stdio.h>

int collatz_sequence(int, int);

int main()
{
	int A, L;
	int c = 1;
	while (scanf("%d%d", &A, &L) == 2) 
	{
		if (A < 0 && L < 0) break;
		printf("Case %d: A = %d, limit = %d, ", c, A, L);
		printf("number of terms = %d\n", collatz_sequence(A, L));
		c++;
	}
	return 0;
}

int collatz_sequence(int A, int L) {
	int max = 1;
	while (A != 1) {
		max++;
		if (A%2 != 0) A = 3*A + 1;
		else A /= 2;
		if (A > L) {
			max--;
			break;
		}
	}
	return max;
}