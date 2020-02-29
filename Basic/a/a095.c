#include <stdio.h>

int main()
{
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF)
	{
		if (N == M) printf("%d\n", M);
		else printf("%d\n", M+1);
	}
	return 0;
}