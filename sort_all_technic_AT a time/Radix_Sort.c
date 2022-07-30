#include <stdio.h>
#include <stdlib.h>
int Get_Max(int a[], int n)
{
    int mx;
    for (int i = 0; i < n; i++)
    {
        mx = a[0];

        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    return mx;
}
void Count(int a[], int n, int posi)
{
    // output and count array here!!
    int output[n], i;
    int count[10] = {0};
    for (i = 0; i < n; i++)
    {
        count[(a[i] / posi) % 10]++;
    }
    for (i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    // output array build!
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(a[i] / posi) % 10] - 1] = a[i];
        count[(a[i] / posi) % 10]--;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
void Radix(int a[], int n)
{
    int max = Get_Max(a, n);
    for (int posi = 1; max / posi > 0; posi *= 10)
    {
        Count(a, n, posi);
    }
}
int main()
{
    int n, i;
    printf("\n enter terms:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    Radix(a, n);
    printf("\n sorted: ");
    PrintArr(a, n);
    return 0;
}