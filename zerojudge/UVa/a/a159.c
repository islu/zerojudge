#include <stdio.h>
#include <string.h>

int main()
{
	char card_number[30];
	int N;
	int i, j;
	while (scanf("%d ", &N) != EOF)
  {
		for (i = 0; i < N; i++) {
			gets(card_number);
			int len = strlen(card_number);
			int ch1 = 0, ch2 = 0, total = 0;
			int counter = 1;
			for (j = len-1; j >= 0; j--) {
				if (card_number[j] == ' ') continue;
				if (counter % 2 != 0) ch1 += card_number[j] - '0';
				else {
					int temp = (card_number[j]-'0') * 2;
					while (temp != 0) {
						ch2 += temp % 10;
						temp /= 10;
					}
				}
				counter++;
			}
			total = ch1 + ch2;
			if (total % 10 == 0) printf("Valid\n");
			else printf("Invalid\n");
		}
	}
}
