#include <stdio.h>
#include <string.h>

int main() {
	char b[20];
	int i, j;
	while(scanf("%s", b) !=EOF) {
		int len=strlen(b);
		int convert=0;
		for(i=0;i<len;i++) {
			int temp=1;
			for(j=0;j<len-1-i;j++) {
				temp *= -2;
			}
			convert += (b[i]-'0')*temp;
		}
		printf("%d\n", convert);
	}
	return 0;
}
