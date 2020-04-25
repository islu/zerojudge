#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		int i;
		char train_tracks[250];		
		for (i = 0; i < n; i++) {
			scanf(" %[MF ]", train_tracks);
			
			int len = strlen(train_tracks);
			int fail = 0;
			int j;
			
			if (len <= 2 || train_tracks[0] == train_tracks[len-1]) fail++;
			else {
				for (j = 1; j < len-1; j+=3) {
					if (train_tracks[j] == train_tracks[j+2]) {
						fail++;
						break;
					}
				}
			}
			
			if (fail) printf("NO LOOP\n");
			else printf("LOOP\n");
		}
	}
	return 0;
}