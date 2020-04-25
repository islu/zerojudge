#include <stdio.h>
#include <string.h>

int encode(char);
void covertToHex(char*);
void covertToRGB(char*);

int main() {
	char color[20];
	while(gets(color)!= 0) {
		if(color[0]=='#') covertToRGB(color);
		else covertToHex(color);
	}
	return 0;
}

void covertToHex(char* arr) {
	char table[17] = "0123456789ABCDEF";
	int len = strlen(arr);
	int i = 0;
	int ans = 0, tmp = 0;
	printf("#");
	for (i = 0; i < len; i++) {
		if('0'<=arr[i] && arr[i]<='9') {
			tmp = arr[i]-'0';
			ans = ans*10 + tmp;
		}
		else {
			printf("%c%c", table[ans/16], table[ans%16]);
			ans = tmp = 0;
		}
	}
	printf("%c%c", table[ans/16], table[ans%16]);
	printf("\n");
}

void covertToRGB(char* arr) {
	int a, b, c;
	a = encode(arr[1])*16 + encode(arr[2]);
	b = encode(arr[3])*16 + encode(arr[4]);
	c = encode(arr[5])*16 + encode(arr[6]);
	printf("%d %d %d\n", a, b, c);
}

int encode(char c) {
	char table[17] = "0123456789ABCDEF";
	int i;
	for (i = 0; i < 17; i++) {
		if(table[i] == c) return i;
	}
	return 0;
}