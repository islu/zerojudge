#include <stdio.h>

int f91(int);

int main()
{
	int N;
	while(scanf("%d", &N) !=EOF)
	{
		if(N == 0) break;
		printf("f91(%d) = %d\n", N, f91(N));
	}
	
	return 0;
}

int f91(int N) {
	if(N >= 101) return N-10;
	else if(N <= 100) return 91;
}