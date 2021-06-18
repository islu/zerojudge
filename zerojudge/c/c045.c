#include<stdio.h>
#include<string.h>

int main()
{
    char input[100][100] = {'\0'};
    int max = 0;
    int i, j, k;

    for (i = 0; gets(input[i])!=NULL; i++)
    {
        int len = strlen (input[i]);

        if ( len > max )
            max = len;
    }
    i--;

    for (j = 0; j < max; j++)
    {
        for (k = i; k >= 0; k--)
        {
            if (input[k][j] == '\0')
                printf(" ");
            else
                printf("%c", input[k][j]);
        }
        printf("\n");
    }

	return 0;
}