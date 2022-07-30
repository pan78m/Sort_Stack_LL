#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-03 (15:18)
 *
 * @returns int
 */
void merge(int a[], int lb, int mid, int ub)
{
  int i, j, k, b[100];
  i = lb;
  j = mid + 1;
  k = lb;
  while (i <= mid && j <= ub)
  {
    if (a[i] < a[j])
    {
      b[k] = a[i];
      i++;
  
    }
    else
    {
      b[k] = a[j];
      j++;
  
    }
    k++;
  }
  while (i <= mid)
  {
    b[k] = a[i];
    i++;
    k++;
  }
  while (j <= ub)
  {
    b[k] = a[j];
    j++;
    k++;
  }
  for (i = lb; i <=ub; i++)
  {
    a[i] = b[i];
  }
}
void mergeS(int a[], int lb, int ub)
{
  if (lb < ub)
  {
    int mid = (lb + ub) / 2;
    mergeS(a, lb, mid);
    mergeS(a, mid + 1, ub);
    merge(a, lb, mid, ub);
  }
}
int main()
{
  int count, i, lb, ub, mid;
  printf("\n enter the terms:\n");
  scanf("%d", &count);
  int a[count];
  for (i = 0; i < count; i++)
  {
    scanf("%d", &a[i]);
  }
  mergeS(a, 0, count - 1);
  for (i = 0; i < count; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}