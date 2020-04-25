#include <stdio.h>
#include <string.h>

int main()
{
	int T, i, D1, M1, Y1, D2, M2, Y2, ages;
	while (scanf("%d", &T) != EOF) {
		for (i = 1; i <= T; i++) {
			scanf("%d/%d/%d", &D1, &M1, &Y1);
			scanf("%d/%d/%d", &D2, &M2, &Y2);

			ages = (Y1 - Y2) - (M1 < M2) - (M1 == M2 && D1 < D2);

			printf("Case #%d: ", i);
			if (ages < 0)
				printf("Invalid birth date\n");
			else if (ages > 130)
				printf("Check birth date\n");
			else
				printf("%d\n", ages);
		}
	}
	return 0;
}