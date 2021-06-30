#include <stdio.h>

int main() {
	char table[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a, b, c;
	int i;
	int sum=0;
	while(scanf("%d%d%d", &a, &b, &c) !=EOF) {
		for(i=1;i<=c;i++) {
			if(i%a==0 || i%b==0) sum+= i;
		}
		printf("%c\n", table[sum%26-1]);
		sum= 0;
	}
	return 0;
}
