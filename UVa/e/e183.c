// UVa/e/e155.c <- related & need optimization
// https://zerojudge.tw/ShowThread?postid=17573&reply=0
/*
find regular

ans(1)=1;
ans(2)=2;
ans(3...4)={2,4};
ans(5...8)={2,4,6,8};
...
ans(2^(n-1)+1...2^n)={2,...,2^n}

*/
#include <stdio.h>
#define SIZE 500005

int main() {
	int p[SIZE];
	int s = 3;
	int k = 1;
	int i;
	
	p[1] = 1;
	p[2] = 2;
	
	while (1)
	{
		if (s > 500000) break;
		for (i = 1; i <= (1<<k); i++) {
			if (s > 500000) break;
			p[s++] = i*2;
		}
		k++;
	}
	
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		printf("%d\n", p[n]);
	}
	
	return 0;
}
