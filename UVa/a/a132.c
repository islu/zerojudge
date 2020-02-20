#include <stdio.h>
#define MOD 2

int main()
{
	short binary[33]={0};
	int n;

	while (scanf("%d", &n) != EOF)
  {
		if (n == 0) break;
    int count = 0;
  	int i = -1;
		do {
			if (n % MOD == 1) count++;
			i++;
			binary[i] = n % MOD;
			n /= MOD;
		} while (n != 0);
		printf("The parity of ");
		for (i; i >= 0; i--)
			printf("%d", binary[i]);
		printf(" is %d (mod 2).\n", count);
	}
	return 0;
}
