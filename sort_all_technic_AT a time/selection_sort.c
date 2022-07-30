#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-02 (16:11)
 *
 * @returns int
 */

int main()
{
    int count, i, j, min, temp, flag = 0;
    printf("\n how many terms:\n");
    scanf("%d", &count);
    int a[count];
    printf("\n element store:\n");
    for (i = 0; i < count; i++) // store element in the array
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    // compare and found minimum element >
    for (i = 0; i < count - 1; i++)
    {
        min = i;
        for (j = i + 1; j < count; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            flag = 1;
        }
    }
    // print the value is
    for (i = 0; i < count; i++)
    {
        printf("%5d", a[i]);
    }
    if (flag == 0)
    {
        printf("\nthis is sorted already..");
    }
    return 0;
}