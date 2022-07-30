#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d",j);
        }
        for (k = 1; k <= 5; k++)
        {
            if (i > 9 && i <= 11)
            {
                printf("%d",i);
            }
            else
            {
                printf("  "); // one space
            }
        }
        printf("\n");
    }
    getch();
}