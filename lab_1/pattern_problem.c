/*  25	24	23	22	21
    10	11	12	13	20
    9	8	7	14	19
    2	3	6	15	18
    1	4	5	16	17 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-24 (20:29)
 *
 * @returns int
 */

int main()
{
    int count, i,j,a[25][25];
    printf("\n enter the number is:");
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        for (  j = 2; j < count; j++)
        {
           printf("%d",a[i][j]);
        }
        
    }

    return 0;
}