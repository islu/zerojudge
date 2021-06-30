#include <stdio.h>
#include <string.h>

int main() {
	char s[50];
	int i;
	int fail=0;
	scanf("%s", s);
	int len=strlen(s);
	for(i=0;i<len/2;i++) {
		if(s[i] != s[len-1-i]) {
			fail=1;
			break;
		}
	}
	for(i=0;i<len;i++) {
		if(!('0'<=s[i] && s[i]<='9')) {
			fail=1;
			break;
		}
		if(i>0 && ((s[i]-'0')>(s[i-1]-'0')*2)) {
			fail=1;
			break;
		}
	}
	if(fail) printf("INCORRECT");
	else {
		for(i=0;i<len;i++) {
			if((s[i]-'0')%2==0) {
				printf("%c", s[i]);
				fail=1;
			}
		}
		if(!fail) printf("0");
	}
	return 0;
}
