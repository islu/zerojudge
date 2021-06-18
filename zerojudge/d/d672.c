#include <stdio.h>
#include <string.h>

int main()
{
	char N[1001];
	while (scanf("%s", N) != EOF)
	{
		if (N[0] == '0') break;
		int sum1 = 0;
		int sum2 = 0;
		int degree = 1;		
		int len = strlen(N);
		int i;
		
		for (i = 0; i < len; i++)
			sum1 += N[i] - '0';

		if (sum1 % 9 != 0) printf("%s is not a multiple of 9.\n", N);
		else {
			while (sum1 != 9) {
				for (i = 0; sum1 != 0; i++) {
					sum2 += sum1 % 10;
					sum1 /= 10;
				}
				sum1 = sum2;
				sum2 = 0;
				degree++;
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n", N, degree);
		}

	}
	return 0;
}