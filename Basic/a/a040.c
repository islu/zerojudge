#include <stdio.h>

int main() {
	int table[24] = { 
					1,2,3,4,
					5,6,7,8,
					9,153,370,371,
					407,1634,8208,9474,
					54748,92727,93084,548834,
					1741725,4210818,9800817,9926315
					};
	int n, m;
	int i;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int flag = 0;
		for (i = 0; i < 24; i++) {
			if (n <= table[i] && table[i] <= m) {
				printf("%d ", table[i]);
				flag++;
			}
		}
		
		if (!flag) printf("none");
		printf("\n");
	}
	return 0;
}