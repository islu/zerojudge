#include <stdio.h>
#include <string.h>

int main() {
	int t;
	int i, j;
	char str[50];
	int len;
	while(scanf("%d", &t) == 1) {
		for(i=0;i<t;i++) {
			int l=0;
			int r=0;
			int fail=0;
			scanf("%s", str);
			len = strlen(str);
			for(j=0;j<len;j++) {
				if(str[j] == '(') l++;
				else if(str[j] == ')') r++;
				if(r>l) {
					fail++;
					break;
				}
			}
			if(l!=r) fail++;
			if(fail) printf("0\n");
			else printf("%d\n", l);
		}
	}
	return 0;
}
