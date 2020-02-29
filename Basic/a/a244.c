#include <stdio.h>

int main()
{
	int N;
	int i;
	int a;
	long long b, c;
	while (scanf("%d", &N) != EOF)
	{
		for (i = 0; i < N; i++) {
			scanf("%d%lld%lld", &a, &b, &c);
			switch (a) {
				case 1:
					printf("%lld\n", b+c);
					break;
				case 2:
					printf("%lld\n", b-c);
					break;
				case 3:
					printf("%lld\n", b*c);
					break;
				case 4:
					printf("%lld\n", b/c);
					break;
			}
		}
	}
	return 0;
}