#include <stdio.h>
#include <string.h>

int main() {
	char p[300];
	while (gets(p) != 0) {
		int len = strlen(p);
		int i;
		int flag = 0;
		for (i = 0; i < len; i++) {
			if ('A'<=p[i] && p[i]<='Z') p[i] += 32;		
		} 
		for (i = 0; i < len; i++) {
			if('a'<=p[i] && p[i]<='z') {
				p[i] -= 32;
				flag = 1;
				printf("%s\n", p);
			}
			if (flag) {
				p[i] += 32;
				flag = 0;
			}
		}
	}
	return 0;
}