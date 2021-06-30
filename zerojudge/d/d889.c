#include <stdio.h>
#define USED_TIME 5
#define WEATING_TIME 30

int main() 
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i, p[N], leaving_time;

		leaving_time = 0;

		for (i = 0; i < N; i++)
			scanf("%d", &p[i]);

		for (i = 0; i < N; i++) 
		{
			if (leaving_time > p[i])
				leaving_time += USED_TIME;
			else if (leaving_time + WEATING_TIME > p[i])
				leaving_time = p[i] + USED_TIME;
			else {
				leaving_time += WEATING_TIME;
				break;
			}
		}
		if (i == N)
			leaving_time += WEATING_TIME;
		printf("%d\n", leaving_time);
	}
	return 0;
}
