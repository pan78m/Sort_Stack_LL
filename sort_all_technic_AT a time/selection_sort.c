#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-02 (16:11)
 *
 * @returns int
 */
void pA(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
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
    printf("\nGiven Array:\n");
    pA(a, count);
    printf("\n");
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
            swap(&a[i], &a[min]);
            printf("pass ---%d: ",i+1);
            pA(a, count);
            printf("\n");
        }
    }
    // print the value
    printf("\nfinal output:\n");
    pA(a, count);
    return 0;
}