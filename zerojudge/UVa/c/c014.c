#include <stdio.h>

int main()
{
	int n1, n2;

	while (scanf("%d%d" ,&n1, &n2) !=EOF)
	{
		int carry = 0;
		int calcul = 0;
		int times = 0;
		
		if (n1==0 && n2==0) break;
		do {
			calcul = n1%10 + n2%10 + carry;
			carry = 0;
			if (calcul >= 10) {
				carry++;
				times++;
			}
			n1= n1 / 10;
			n2= n2 / 10;
		} while (n1!=0 || n2!=0);
		
		if (times == 0) printf("No carry operation.\n");
		else if (times == 1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n", times);

	}
	return 0;
}