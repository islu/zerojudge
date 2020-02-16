#include <stdio.h>

int main()
{
	long long triangle_wave[10]= {1, 22, 333, 4444, 55555, 666666, 7777777, 88888888, 999999999};
	int n, A, F;
	int i, j, k;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++) {
			scanf("%d%d", &A, &F);
			for (k = 0; k < F; k++) {
				if (A != 1) {
					for (j = 0; j < A; j++)
						printf("%lld\n", triangle_wave[j]);
					for (j = A-2; j >= 0; j--)
						printf("%lld\n", triangle_wave[j]);
					printf("\n");
				}
				else printf("1\n");
			}
		}
	}
	return 0;
}