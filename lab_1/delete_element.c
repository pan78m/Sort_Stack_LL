/* C program to delete an element in an array */
#include <stdio.h>
/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-18 (08:42)
 *
 * @returns int
 */

int main()
{
   int arr[10], i, n, pos;
   printf("enter the total size:\n");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("element-%d:", i + 1);
      scanf("%d", &arr[i]);
   }
   printf("\n enter hte position:\n");
   scanf("%d", &pos);
   for (i = pos - 1; i < n - 1; i++)
   {
      arr[i] = arr[i + 1];
   }
   printf("\n delete the value:\n");
   for (i = 0; i < n - 1; i++)
   {
      printf("%4d", arr[i]);
   }

   return 0;
}