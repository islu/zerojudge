#include <stdio.h>
#define S(v, t) 2*v*t

int main()
{
	int v, t;
	while (scanf("%d%d", &v, &t) != EOF)
	{
		printf("%d\n", S(v, t));
	}
	return 0;
}