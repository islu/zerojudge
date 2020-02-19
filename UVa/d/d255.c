#include <stdio.h>

int GCD(int , int);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF && N != 0)
	{
		int i, j;
		int G = 0;		
		for (i = 1; i < N; i++) {
			for (j = i+1; j <= N; j++) {
			G +=	GCD(i, j);
			}
		}
		printf("%d\n", G);
	}
	return 0;
}

int GCD(int a, int b) {
	int max = 0;
	do {
		a = a % b;
		if (a == 0) {
			max = b;
			return max;
		} 
		b = b % a;
		max = a;
	} while(b != 0);
	return max;
}