#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
    int w1 = 1, w2 = 1;
    char a[max], b[max];
    printf("\nenter the first sentence:\n");
    gets(a);
    printf("\neneter the 2nd sentence:\n");
    gets(b);
    printf("\n sentence 1st:\n");
    puts(a);
    printf("\n sentence 2nd:\n");
    puts(b);
    printf("\ntotal words of 1st sentence:\n");
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i] == ' ' && a[i + 1] != ' ')
        {
            w1++;
        }
    }
    printf("%d ", w1);
    printf("\ntotal words of 2nd sentence:\n");
    for (int i = 0; b[i]!='\0'; i++)
    {
        if (b[i] == ' ' && b[i + 1] != ' ')
        {
            w2++;
        }
    }
    printf("%d ", w2);
    if (w1 > w2)
    {
        printf("\nmaximum world is 1st sentence\n");
    }
    else
    {
        printf("\nmaximum world is 2nd sentence\n");
    }

    return 0;
}