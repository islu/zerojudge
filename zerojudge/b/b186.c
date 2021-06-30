#include <stdio.h>

int main() {
	long long cookie, cake, chocolate;
	while(scanf("%lld%lld%lld", &cookie, &chocolate, &cake) !=EOF) {
		if(cookie/10>= cake/2) chocolate+= cake/2;
		else if (cookie/10< cake/2) chocolate+= cookie/10;
		printf("%lld 個餅乾，%lld 盒巧克力，%lld 個蛋糕。\n", cookie, chocolate, cake);
	}
	return 0;
}
