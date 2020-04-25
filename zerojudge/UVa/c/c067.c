#include <stdio.h>

int main()
{
	short n;
	short h[50];
	int count = 0;
	while (scanf("%d", &n) != EOF & n > 0)
	{
		int i;
		int ave = 0;
		int moves = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &h[i]);
			ave += h[i];
		}
		ave = ave / n;
		for (i =0 ; i < n; i++) {
			if (h[i] > ave) moves += h[i] - ave;
		}
		count++;
		printf("Set #%d\n", count);
		printf("The minimum number of moves is %d.\n\n", moves);

	}
	return 0;
}