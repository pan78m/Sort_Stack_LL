#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-02 (10:51)
 *
 * @returns int
 */

int main()
{
     int count, i, j, key, flag = 0;
     printf("\n how many terms:");
     scanf("%d", &count);
     int a[count];
     printf("\n index value store in array:\n");
     for (i = 0; i < count; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("\n compare the value in:\n");
     for (i = 0; i < count; i++)
     {
          key = a[i];
          j = i - 1;
          while (j >= 0 && a[j] > key)
          {
               a[j + 1] = a[j];
               j--;
               flag = 1;
          }
          a[j + 1] = key;
     }

     printf("\n the sorted array is:\n");
     for (i = 0; i < count; i++)
     {
          printf("%d  ", a[i]);
     }
     if (flag == 0)
     {
          printf("\n already sorted!!");
     }

     return 0;
}