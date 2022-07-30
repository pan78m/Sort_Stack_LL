#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-28 (17:35)
 *
 * @returns int
 */
int RbinaryS(int a[], int start, int end, int value);
int main()
{
   int start, end, mid, i, n, value, result;
   printf("\n enter the how many terms:\n");
   scanf("%d", &n);
   int a[n];
   start = 0;
   end = n - 1;
   printf("\n store the index value user input:\n");
   for (i = 0; i < n; i++)
   {
      printf("\n element-%d:", i + 1);
      scanf("%d", &a[i]);
   }
   printf("\n enter the search value:");
   scanf("%d", &value);
   result = RbinaryS(a, 0, n - 1, value);
   if (result == -1)
   {
      printf("this value not found");
   }
   else
      printf("the position of the value:%d", mid);

   return 0;
}
int RbinaryS(int a[], int value, int start, int end)
{
   int mid;
   while (start <= end)
   {
      mid = (start + end) / 2;
      if (a[mid] == value)
      {
         return mid;
      }
      else if (a[mid] > value)
      {
         return RbinaryS(a, start, mid - 1, value);
      }
      else
      {
         return RbinaryS(a, mid + 1, end, value);
      }
   }
   return -1;
}