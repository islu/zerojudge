#include <stdio.h>

int main() {
	int L;
	while(scanf("%d", &L) == 1) {
		if(L<0) printf("%d\n", L*(-1)*2);
		else printf("%d\n", L*2-1);
	}
	return 0;
}
