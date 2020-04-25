#include <stdio.h>
#include <string.h>

int main() {
	char int128[10001];
	while (scanf("%s", int128) != EOF) {
		int i;
		long long total = 0;		
		for (i = 0; i < strlen(int128); i++)
			total += int128[i] - 48;

		total % 3 == 0 ? printf("yes\n"): printf("no\n");
	
	}
	return 0;
}