// reference UVa/d/d980.c
#include <stdio.h>

int main() {
	int N;
	int i;
	long long a, b, c;
	scanf("%d", &N);
		
	for (i = 1; i <= N; i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a>0 & b>0 & c>0 & a+b>c & b+c>a & a+c>b) printf("OK\n");
		else printf("Wrong!!\n");
	}
	
	return 0;
}
