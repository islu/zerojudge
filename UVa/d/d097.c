#include <stdio.h>

int iabs(int, int);

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i;
		int num[n];
		int check[n];
		int isJolly = 1;
		for (i = 0; i < n; i++) {
			scanf("%d", &num[i]);
			check[i] = 0;
		}
		
		for (i = 0; i < n-1; i++) {
				int pos = iabs(num[i], num[i+1]);
				check[pos-1] = 1;
		}
		
		for (i = 0; i < n-1; i++) {
				if (check[i] == 0) {
					isJolly = 0;
					break;
				}
		}
		
		if (isJolly == 1) printf("Jolly\n");
		else if (isJolly == 0) printf("Not jolly\n");
		
	}

	return 0;
}

int iabs(int a, int b) {
	int result = a - b;
	if (result < 0) return result*(-1);
	else return result;
}
