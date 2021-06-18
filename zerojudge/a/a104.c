#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int num[1001];
		int i, j;
		int temp = 0;
		for (i = 0; i < n; i++)
			scanf("%d", &num[i]);

		for (i = 0; i <n-1; i++) {
			for (j = 1; j < n-i; j++) {
				if (num[j-1] > num[j]) {
					temp = num[j-1];
					num[j-1] = num[j];
					num[j] = temp;
				}
			}
		}
		
		for(i = 0; i < n; i++)
			printf("%d ", num[i]);
		printf("\n");
	}
	return 0;
}