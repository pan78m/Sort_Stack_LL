#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-25 (18:32)
 *
 * @returns int
 */

int main()
{
    int n, i, j, flag = 0, temp;
    printf("\n enter the size:\n");
    scanf("%d", &n);
    int a[n];
    printf("\n enter the value is disorder:\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }

    for (j = 0; j < n - 1; j++)
    {

        for (i = 0; i < n - 1 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;
            }
        }
    }
    printf("\n print the sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    if (flag == 0)
    {
        printf("\n This is the sorted array!!");
    }

    return 0;
}