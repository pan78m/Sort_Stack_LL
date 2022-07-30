#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-21 (19:25)
 *
 * @returns int
 *
 *int search(char*,char);
int main()
{
      char str[10],result;
      char ch;
      printf("\n Enter the name:\n");
      gets(str);
      printf("\n enter the letter what do you search:\n");
      scanf("%c",&ch);
      result=search(str,ch);
      if (result==1)
        {
          printf("\n the result is found!!!\n");
        }
    else
        printf("\n the result is not found!!!\n");

     return 0;
}
    int search(char *ptr,char ch)
    {
        int p=-1;
        while (*ptr!='\0')
        {
            if (ch==*ptr)
            {
                p=1;
                break;
            }
            ptr++;
        }
       return p;
    }
 */
int main()
{
    char str[10][10], key[10];
    int n, start, end, i, mid;
    printf("\n enter how many name are store:\n");
    scanf("%d", &n);
    printf("\n Enter the name serial wisely:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    printf("\n enter the key name which search:\n");
    scanf("%s", &key);
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (strcmp(key, str[mid]) == 0)
        {
            printf("\nkey is found the position is:%d", mid + 1);
        }

        else if (strcmp(key, str[mid]) > 0)
        {
            end = end;
            start = mid + 1;
        }
        else
            start = 0;
        end = mid - 1;
    }
    printf("\n the key is not found!!\n");

    return 0;
}
