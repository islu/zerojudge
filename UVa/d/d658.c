#include <stdio.h>

int main()
{
	int N;
	int ccase = 1;
	while (scanf("%d", &N) != EOF)
	{
		if (N < 0) break;
		int paste = 0;
		int i = 1;
		
		while (i < N) {
			i = i * 2;
			paste++;
		}
		printf("Case %d: %d\n", ccase, paste);

		ccase++;
	}
	return 0;
}