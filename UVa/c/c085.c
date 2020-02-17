#include <stdio.h>

int main()
{
	int Z, I, M, L, c;
	c = 1;
	while (scanf("%d%d%d%d", &Z, &I, &M, &L) != EOF)
	{
		if (Z == 0 && I == 0 && M == 0 && L == 0) break;
		int i
		int ans[10000];
		int check = 1;
		int p = 0;
		while (check) {
			ans[p] = L;
			L = (Z*L+I)%M;
			for (i = 0; i < p; i++) {
				if (ans[i] == L) {
					printf("Case %d: %d\n", c, p-i+1);
					check = 0;
				}
			}
			p++; 
		}
		c++;
	}
	return 0;
}