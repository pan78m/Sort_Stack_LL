#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
int main()
{
    char t[max];
    int words = 1;
    printf("\nenter the text:\n");
    gets(t);
    printf("\nprint the text:\n");
    puts(t);
    printf("\nhow many words in both a,e:\n");
    for (int i = 0; t[i]!='\0'; i++)
    {
        if (t[i] == 'a' && t[i] == 'e')
        {
            words++;
        }
    }
    printf("%d\n", words);

    return 0;
}