#include <stdio.h>

int main() {
	int i;
	int n, h, m, q;
	scanf("%d%d%d", &n, &h, &m);
	
	int t, tH[n], tM[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		if (i == 0) {
			tM[i] = m+t;
			tH[i] = h+tM[i]/60;
		}
		else {
			tM[i] = tM[i-1]+t;
			tH[i] = tH[i-1]+tM[i]/60;
		}
		
		tM[i] %= 60;
		tH[i] %= 24;
	}
	
	while (scanf("%d", &q) != EOF && q != 0) {
		printf("%02d:%02d\n", tH[q-1], tM[q-1]);
	}
	
	return 0;
}