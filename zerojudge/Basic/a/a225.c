#include <stdio.h>

int main()
{
	int n;
	int *p;
	int *ans;
	int i;
	int hold;
	int pass;
	int swaptime = 0;
	while (scanf("%d", &n) != EOF)
	{
		p = (int *)malloc(n*sizeof(int));
		ans = (int *)malloc(n*sizeof(int));
		for (i = 0; i < n; i++)
			scanf("%d", &p[i]);

		for (pass = 0; pass <n-1; pass++) {
			for (i = 0; i < n-1-pass; i++) {
				if (p[i] < p[i+1]) {
					hold = p[i];
					p[i] = p[i+1];
					p[i+1] = hold;
					swaptime++;
				}
			}
			if (swaptime == 0) break;
		}
		swaptime = 0;
		for (pass = 0; pass < n-1; pass++) {
			for (i = 0; i <n-1-pass; i++) {
				if (p[i]%10 > p[i+1]%10) {
					hold = p[i];
					p[i] = p[i+1];
					p[i+1]=  hold;
					swaptime++;
				}
			}
			if (swaptime == 0) break;
		}
		swaptime = 0;
		
		for (i = 0; i < n; i++)
			printf("%d ", p[i]);
		printf("\n");
		
		free(p);
	}
	return 0;
}