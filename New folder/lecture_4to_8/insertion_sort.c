#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-26 (17:54)
 *
 * @returns int
 */

int main()
{
    int n, i, j, temp, flag = 0;
    printf("\n enter the length:");
    scanf("%d", &n);
    int a[n];
    printf("\n store the index value:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n compare and the value is:");
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j]; // a[j] je value thakbe seta a[j+1] bose jabe mane holo left ar value right bosbe.

            j--;
        }
            a[j + 1] = temp;
         
    }
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
        flag=1;
    }

    if (flag == 0)
    {
        printf("\n this value is already sorted!!!\n");
    }

    return 0;
}