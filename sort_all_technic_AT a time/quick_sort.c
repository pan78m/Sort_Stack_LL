#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-02 (10:51)
 *
 * @returns int
 */
void quick_sort(int a[], int s, int end)
{
    int i, j,temp, pivot ;
    if (s < end)
    {   pivot=s;
       i=s;j=end;
        if (i < j)
        {
            while (a[i] <= pivot)
            {
                i++;
            }
            while (a[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quick_sort(a, s, j - 1);
        quick_sort(a, j + 1, end);
    }
}

int main()
{
    int count, i,s,end,pivot,j,temp;
    printf("\n how many terms:");
    scanf("%d", &count);
    int a[count];
    printf("\n index value store in array:\n");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, count - 1);
    for (i = 0; i < count; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}