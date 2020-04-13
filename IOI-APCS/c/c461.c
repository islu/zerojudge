#include <stdio.h>

int and(int ,int ,int);
int or(int ,int ,int);
int xor(int ,int ,int);

int main() {
	int x, y, o;
	while(scanf("%d%d%d", &x, &y, &o) == 3) {
		if(!(and(x, y, o))) printf("AND\n");;
		if(!(or(x, y, o))) printf("OR\n");
		if(!(xor(x, y, o))) printf("XOR\n");
		if(and(x, y, o) && or(x, y, o) && xor(x, y, o)) printf("IMPOSSIBLE\n");
	}
	return 0;
}

int and(int x, int y, int o) {
	if(x==0 && y==0 && o==0) return 0;
	else if(x==0 && y!=0 && o==0) return 0;
	else if(x!=0 && y==0 && o==0) return 0;
	else if(x!=0 && y!=0 && o!=0) return 0;
	else return 1;
}

int or(int x, int y, int o) {
	if(x==0 && y==0 && o==0) return 0;
	else if(x==0 && y!=0 && o!=0) return 0;
	else if(x!=0 && y==0 && o!=0) return 0;
	else if(x!=0 && y!=0 && o!=0) return 0;
	else return 1;
}

int xor(int x, int y, int o) {
	if(x==0 && y==0 && o==0) return 0;
	else if(x==0 && y!=0 && o!=0) return 0;
	else if(x!=0 && y==0 && o!=0) return 0;
	else if(x!=0 && y!=0 && o==0) return 0;
	else return 1;
}