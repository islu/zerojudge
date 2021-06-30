#include <stdio.h>
#include <string.h>

int main() {
	char password[50];
	int len;
	int i;
	while(scanf("%s", password) !=EOF) {
		int test = 0;
		int f1 = 0, f2 = 0, f3 =0;
		len = strlen(password);
		if(len >= 8) test++;
		for(i=0;i<len;i++) {
			if('a'<=password[i] && password[i]<='z') f1++;
			else if('A'<=password[i] && password[i]<='Z') f2++;
			else f3++;
		}
		if(f1>0 && f2>0) test++;
		if(f1+f2>0 && f3>0) test++;
		switch(test) {
			case 0:
				printf("This password is WEAK\n");
				break;
			case 1:
				printf("This password is ACCEPTABLE\n");
				break;
			case 2:
				printf("This password is GOOD\n");
				break;
			case 3:
				printf("This password is STRONG\n");
				break;
		}
	}
	return 0;
}
