#include <stdio.h>
#define N 5

int main() {
	int t, poke[N];
	int i, j;
	while(scanf("%d", &t) !=EOF) {
		for(i=0;i<t;i++) {
			int check[14] = {0};
			int n4 = 0;
			int n3 = 0;
			int n2 = 0;
			int c = 0;
			int s = 0;
			int f[4] = {0};
			int a = 0;
			for(j=0;j<N;j++) {
				scanf("%d", &poke[j]);
				if(poke[j]%13 == 0) {
					check[13]++;
					f[(poke[j]/13)-1]++;
				}
				else {
					check[poke[j]%13]++;
					f[poke[j]/13]++;
				}
			}
			for(j=0;j<14;j++) {
				if(check[j] == 4) n4++;
				else if(check[j] == 3) n3++;
				else if(check[j] == 2) n2++;
			}
			if(n4) printf("6\n");
			else if(n3 && n2) printf("5\n");
			else if(n3) printf("3\n");
			else if(n2 == 2) printf("2\n");
			else if(n2) printf("1\n");
			else {
				for(j=1;j<14;j++) {
					if(check[j] == 1) c++;
					else {
						if(c == 5) s++;
						c = 0;
					}
				}
				for(j=0;j<4;j++) {
					if(f[j] == 5) a++;
				}
				if(check[1] & check[10] & check[11] & check[12] & check[13]) s++;
				if(s && a) printf("7\n");
				else if(s) printf("4\n");
				else printf("0\n");
			}
		}
	}
	return 0;
}
