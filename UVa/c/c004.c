#include <stdio.h>

int main()
{
	int i;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) 
	{
		int s, d;
		scanf("%d%d", &s, &d);
		int a = (s+d) / 2;
		int b = a - d;
		if (a+b!=s || a<0 || b<0) printf("impossible\n");
		else printf("%d %d\n", a, b);
		a = b = 0;
	}
	
	return 0;
}
