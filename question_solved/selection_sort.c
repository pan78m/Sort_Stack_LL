#include <stdio.h>
#include <stdlib.h>
void printA(int *a,int n){
    for (int i = 0; i <n; i++)
    {
         printf("%d\t",a[i]);
    }
    
}
void swap(int *a,int *b){
    int temp=*a;
       *a=*b;
       *b=temp;
}
void sort(int *a,int n){
    int i,j;
    for ( i = 0; i <n-1; i++)
    {
       int max=i;
       for ( j =i+1; j <n; j++)
       {
            if (a[j]<a[max])
            {
                max=j;
            }    
       }
       if (i!=max)
       {
         swap(&a[i],&a[max]);
         printA(a,n);
         printf("\n");
       } 
    }
    
}
int main()
{
     // Let's start here
     int n;
     printf("\nHow value are store:\n");
     scanf("%d",&n);
     int a[n];
     printf("\nEnter the data of array:\n");
     for (int i = 0; i <n; i++)
     {
        printf("element-%d:",i+1);
        scanf("%d",&a[i]);
     }
     printf("\n");
     printA(a,n);
     printf("\nSort:\n");
     sort(a,n);
     printf("\n The Final sorted value is:\n");
     printA(a,n);
     return 0;
}