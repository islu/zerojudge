#include <stdio.h>

int main()
{
	int n;

	while (scanf("%d", &n) != EOF)
	{
		int i;
		double grade;
		double total = 0;
		double average = 0;
		for (i = 0; i < n; i++) {
			scanf("%lf", &grade);
			if (grade <= 100) total += grade;
		}
		average = total / n;
		
		if (average > 59) printf("no\n");
		else printf("yes\n");

	}
	return 0;
}