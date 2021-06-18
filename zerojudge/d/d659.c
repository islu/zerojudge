#include <stdio.h>

int main()
{
	short T;
	short i;
	int salary[3];
	int hold = 0;
	int j, pass;
	while (scanf("%d", &T) != EOF)
	{
		for (i = 0; i < T; i++) {
			scanf("%d%d%d", &salary[0], &salary[1], &salary[2]);
			for (pass = 0; pass < 2; pass++) {
				for (j = 0; j < 2-pass; j++) {
					if (salary[j] > salary[j+1]) {
						hold = salary[j];
						salary[j] = salary[j+1];
						salary[j+1] = hold;
					}
				}
			}
			hold = 0;
			printf("Case %d: %d\n", i+1, salary[1]);
		}
	}
	return 0;
}