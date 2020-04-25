#include <stdio.h>

int main()
{
	char id[10];
	while (scanf("%s", id) != EOF)
	{
		int check = 0;
		int i;	
		switch (id[0]) {
			case 'A':
				check = 1;
				break;
			case 'B':
				check = 1*9+1;
				break;
			case 'C':
				check = 2*9+1;
				break;
			case 'D':
				check = 3*9+1;
				break;
			case 'E':
				check = 4*9+1;
				break;
			case 'F':
				check = 5*9+1;
				break;
			case 'G':
				check = 6*9+1;
				break;
			case 'H':
				check = 7*9+1;
				break;
			case 'I':
				check = 4*9+3;
				break;
			case 'J':
				check = 8*9+1;
				break;
			case 'K':
				check = 9*9+1;
				break;
			case 'L':
				check = 2;
				break;
			case 'M':
				check = 9+2;
				break;
			case 'N':
				check = 2*9+2;
				break;
			case 'O':
				check = 5*9+3;
				break;
			case 'P':
				check = 3*9+2;
				break;
			case 'Q':
				check = 4*9+2;
				break;
			case 'R':
				check = 5*9+2;
				break;
			case 'S':
				check = 6*9+2;
				break;
			case 'T':
				check = 7*9+2;
				
				break;
			case 'U':
				check = 8*9+2;
				break;
			case 'V':
				check = 9*9+2;
				break;
			case 'W':
				check = 2*9+3;
				break;
			case 'X':
				check = 3;
				break;
			case 'Y':
				check = 9+3;
				break;
			case 'Z':
				check = 3*9+3;
				break;
			default :
				printf("fake\n");
				continue;
		}
		for (i = 1; i < 9; i++)
			check += (id[i]-48) * (9-i);

		check += (id[9]-48);
		
		if (check % 10 == 0) printf("real\n");
		else printf("fake\n");

	}
	return 0;
}