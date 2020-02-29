#include <stdio.h>
#include <string.h>
#define SIZE 100000

char s[SIZE];

int main() {
	int t;
	int i, j;
	while(scanf("%d", &t) != EOF)
	{
		int x, y, z, w, n, m;
		int len;
		for (i = 0; i < t; i++) {
			int ans = 0;
			int posion = 0;
			scanf("%d%d%d%d%d%d", &x, &y, &z, &w, &n, &m);
			gets(s);
			gets(s);
			len = strlen(s);
			ans += m;
			for (j = 0; j<len && ans>0; j++) {
				if ('0'<=s[j] && s[j]<='4') {
					if (posion && ans>0) ans -= (n * posion);
					if ((s[j]-'0')==1 && ans>0) ans += x;
					else if ((s[j]-'0')==2 && ans>0) ans += y;
					else if ((s[j]-'0')==3 && ans>0) ans -= z;
					else if ((s[j]-'0')==4 && ans>0) {
						ans -= w;
						posion++;
					}
				}
			}
			if (ans > 0) printf("%dg\n", ans);
			else printf("bye~Rabbit\n");
		}
	}
	return 0;
}