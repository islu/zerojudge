#include <stdio.h>
#define SIZE 3000

int main()
{
	int input;
	int i, j;
	int sum = 0;
	int n[SIZE] = {0};
	int ans[1001] = {0};
	n[0] = 1;
	for (i = 1; i <= 1000; i++) {
		for (j = 0; j < SIZE; j++) {
			n[j] = n[j] * i;
		}
		for (j = 0; j < SIZE; j++) {
			if (n[j] >= 10) {
				n[j+1] += n[j] / 10;
				n[j] = n[j] % 10;
			}
		}
		for (j = 0; j < SIZE; j++) {
			sum += n[j];
		}
		ans[i] = sum;
		sum = 0;
	}
	while (scanf("%d", &input) != EOF)
	{
		printf("%d\n", ans[input]);
	}
	return 0;
}