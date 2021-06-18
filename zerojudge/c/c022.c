#include <stdio.h>

int main()
{
	int n;
	int i;	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int a, b;
		int total = 0;
		scanf("%d%d", &a, &b);
		for (a; a <= b; a++)
			if (a%2 != 0)
				total+= a;
		
		printf("Case %d: %d\n", i+1, total);

	}
	return 0;
}