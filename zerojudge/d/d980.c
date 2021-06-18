// check trangle sides
#include <stdio.h>

int main() {
	int T;
	int i;
	long long a, b, c;
	scanf("%d", &T);
		
	for (i = 1; i <= T; i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a>0 & b>0 & c>0 & a+b>c & b+c>a & a+c>b)
		{
			if (a==b & b==c & c==a) printf("Case %d: Equilateral\n", i);
			else if (a!=b & b!=c & c!=b) printf("Case %d: Scalene\n", i);
			else printf("Case %d: Isosceles\n", i);
		}
		else printf("Case %d: Invalid\n", i);
	}
	
	return 0;
}
