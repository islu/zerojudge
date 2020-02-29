#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		if (N <= 10) printf("%d\n", N*6);
		else if (N>10 && N<=20) printf("%d\n", (N-10)*2+60);
		else if (N>20 && N<=40) printf("%d\n", (N-20)+80);
		else printf("%d\n", 100);
	}
	return 0;
}