#include <stdio.h>
#include <stdlib.h>
/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-28 (13:35)
 *
 * @returns int
 */

int size, i, j, flag = 0;
void li_search(int *a, int n)
{

    ArrInput(a, n);
    printf("\n");
    pArr(a, n);
    printf("\n");
    int value;
    printf("\nWhich value search:\n");
    scanf("%d", &value);
    for (i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\nValue not found!\n");
    }
    else
    {
        printf("Value position is-%d\n", i + 1);
    }
}

void ArrInput(int *a, int n)
{
    printf("\nEnter the value of index:\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
}

void pArr(int *a, int n)
{

    printf("\nShow the value of index:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insert()
{
    printf("\nEnter the size:\n");
    scanf("%d", &size);
    int arr[size];
    ArrInput(arr, size);
    printf("\n");
    pArr(arr, size);
    printf("\n");
    int pos, value;
    printf("\nWhich position value add:\n");
    scanf("%d", &pos);

    printf("\nWhich value add:\n");
    scanf("%d", &value);
    for (i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    printf("value added-%d ", arr[pos]);
    size++;
    printf("\n");
    pArr(arr, size);
    printf("\n");
}

void delet()
{

    printf("\nEnter the size:\n");
    scanf("%d", &size);
    int arr[size];
    ArrInput(arr, size);
    printf("\n");
    pArr(arr, size);
    printf("\n");
    int pos, value;
    printf("\nWhich position value del:\n");
    scanf("%d", &pos);
    for (i = pos; i <= size; i++)
    {
        arr[i] = arr[i + 1];
    }
    value = arr[pos];

    size--;
    printf("\n");
    pArr(arr, size);
    printf("\n");
}

void insertion()
{

    int c;
    while (1)
    {
        printf("\t\t\t\t1.Insert\t\t\t\t\t\n");
        printf("\t\t\t\t2.Deletion\t\t\t\t\n");

        printf("\t\t\t\t3.Main Manu\t\t\t\t\n");
        // printf("\t\t\t\t3.Linear Search\t\t\t\t\n");
        printf("\nchoice any item:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        // case 4:
        //     li_search();
        //     break;
        case 3:
            main();
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }
}
void binary_search(int *a, int n)
{
    int low, high, mid, value;
    low = 0;
    high = n - 1;
    ArrInput(a, n);
    printf("\n");
    pArr(a, n);
    printf("\n");
    printf("\nwhich value search:\n");
    scanf("%d", &value);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == value)
        {
            printf("Position of the value is-%d\n", mid + 1);
            flag = 1;
            break;
        }
        else if (a[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("\nValue not found\n");
    }
}
void search()
{
    int n, v;
    printf("\nHow many terms:\n");
    scanf("%d", &v);
    int a[v];
    while (1)
    {
        printf("\t\t\t\t1.Linear Search\t\t\t\n");
        printf("\t\t\t\t2.Binary Search\t\t\t\n");

        printf("\t\t\t\t3.Main Manu\t\t\t\n");
        printf("\nChoice any item:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            li_search(a, v);
            break;
        case 2:
            binary_search(a, v);
            break;
        case 3:
            main();
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }
}
void swap(int *arr, int *b)
{
    int temp = *arr;
    *arr = *b;
    *b = temp;
}
void bubble(int *a, int n)
{
    ArrInput(a, n);
    for (i = 0; i < n - 1; i++)
    {
        for (j =0; j < n - i - 1; j++)
        {
            if (a[j+1] < a[j])
            {
                swap(&a[j+1], &a[j]);
                pArr(a, n);
                printf("\n");
            }
        }
    }
    printf("\nfinal sort:\n");
    pArr(a, n);
    printf("\n");
}

void selection(int *a, int n)
{
}

void insertion_sort(int *a, int n)
{
}

void quick(int *a, int n)
{
}
void merge(int *a, int n)
{
}
void sort()
{
    int n, v;
    printf("\nHow many terms:\n");
    scanf("%d", &v);
    int a[v];
    while (1)
    {
        printf("\t\t\t\t1.Bubble_Sort\t\t\t\n");
        printf("\t\t\t\t2.Selection_Sort\t\t\t\n");
        printf("\t\t\t\t4.Insertion_Sort\t\t\t\n");
        printf("\t\t\t\t5.Quick_Sort\t\t\t\n");
        printf("\t\t\t\t6.Merge_Sort\t\t\t\n");

        printf("\t\t\t\t3.Main Manu\t\t\t\n");
        printf("\nChoice any item:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            bubble(a, v);
            break;
        case 2:
            selection(a, v);
            break;
        case 3:
            main();
            break;
        case 4:
            insertion_sort(a, v);
            break;
        case 5:
            quick(a, v);
            break;
        case 6:
            merge(a, v);
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }
}
int main()
{
    // Let's start here
    int n, v;
    // printf("\nHow many terms:\n");
    // scanf("%d", &v);
    // int a[v];

    while (1)
    {
        printf("\t\t\t\t1.Insertion\t\t\t\n");
        printf("\t\t\t\t2.Search\t\t\t\n");
        printf("\t\t\t\t3.Sort\t\t\t\n");
        // printf("\t\t\t\t3.Binary Search\t\t\t\n");

        printf("\t\t\t\to.Exit\t\t\t\n");
        printf("\nChoice any item:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertion();
            break;
        case 2:
            search();
        case 3:
            sort();
            break;
        case 0:
            exit(0);
            break;

        default:
            printf("\nInvalid Choice .\n");
            break;
        }
    }
    return 0;
}
