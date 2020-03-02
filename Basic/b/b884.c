#include <stdio.h>

int main() {
	int n;
	int i;
	int x, y;
	int yee;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		yee = 100 - x - y;
		if (0<yee & yee<=30) printf("sad!\n");
		else if (30<yee & yee<=60) printf("hmm~~\n");
		else if (60<yee & yee<100) printf("Happyyummy\n");
		else printf("evil!!\n");
	}
	return 0;
}