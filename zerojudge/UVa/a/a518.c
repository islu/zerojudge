#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a, b;
	int temp = 0;
	while (scanf("%d%d", &a, &b) != EOF)
  {
		if (a == -1 && b == -1) break;
		if (b > a) swap(&b, &a);
		if (a-b >= 51) printf("%d\n", 100-(a-b));
		else printf("%d\n", a-b);
	}
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
