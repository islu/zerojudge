#include <stdio.h>
#define SIZE 1001

int main()
{
	int N;
	int i, j;
	int n[SIZE];
	while (scanf("%d", &N) == 1)
  {
		int swaptimes = 0;
		int pass = 0;
		int hold = 0;
		for (i = 0; i < N; i++)
			scanf("%d", &n[i]);

		for (i = 0; i < N; i++) {
			for (j = 0; j <N-1-pass; j++) {
				if (n[j] > n[j+1]) {
					hold = n[j];
					n[j] = n[j+1];
					n[j+1] = hold;
					swaptimes++;
				}
			}
			pass++;
		}
		printf("Minimum exchange operations : %d\n", swaptimes);
	}
	return 0;
}
