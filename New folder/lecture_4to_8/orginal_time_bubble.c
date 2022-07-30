#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-26 (18:11)
 *
 * @returns int
 */

int main()
{
    int n, j, i, flag, temp;
    printf("\n enter the length:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; i < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
               for (j = 0; j < n; j++)
    {
        printf("%4d", a[j]);
    }
    if (flag == 0)
    {
        printf("\n this is array is sorted!!\n");
    }
    return 0;
}