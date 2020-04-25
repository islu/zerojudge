#include <stdio.h>
#define SIZE 10

int intcmp(int, int);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i, j;
		
		printf("Lumberjacks:\n");
		for (i = 0; i < N; i++) {
			int n[SIZE];
			for (j = 0; j < SIZE; j++)
				scanf("%d", &n[j]);
			
			int q = intcmp(n[0], n[1]);
			int ans = 1;
			
			if (q == 1) {
				for (j = 1; j < SIZE-1; j++) {
					if (intcmp(n[j], n[j+1]) != q) {
						ans = 0;
						break;
					}
				}
			}
			else if (q == -1) {
				for (j = 1; j < SIZE-1; j++) {
					if (intcmp(n[j], n[j+1]) != q) {
						ans = 0;
						break;
					}
				}
			}
		
			if (ans == 1) printf("Ordered\n");
			else if (ans == 0) printf("Unordered\n");
		}
	}

	return 0;
}

int intcmp(int a, int b) {
	if (a > b) return 1;
	else if (a < b) return -1;
	else if (a == b) return 0;
}
