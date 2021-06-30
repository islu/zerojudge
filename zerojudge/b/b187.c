#include <stdio.h>

int main() {
	char str[20];
	int hex[8] = {10, 11, 12, 13, 14, 15, 16};
	int d = 0;
	printf("十六進位表示法  相對應的十進位表示法\n");
	while(scanf("%s", str) !=EOF) {
		printf("      %s", str);
		
		if(str[0]>='A' && str[0]<='Z') 
			d+= (hex[str[0]-'A'])*16;
		else 
			d+= (str[0]-'0')*16;
		if(str[1]>='A' && str[1]<='Z') 
			d+= hex[str[1]-'A'];
		else 
			d+= str[1]-'0';
		printf("                 %d\n", d);
		d = 0;
	}
	return 0;
}
