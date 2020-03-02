#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i, temp, times;
		int number[30001] = {0};
		times = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &temp);
			number[temp]++;
			if (times < number[temp]) {
				times = number[temp];
			}
		}
		for (i = 1; i <= 30000; i++) {
			if (number[i] == times) {
				printf("%d %d\n", i, times);
			}
		}
	}
	return 0;
}