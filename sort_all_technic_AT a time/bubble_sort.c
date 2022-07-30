#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-07-02 (10:21)
 *
 * @returns int
 */

int main()
{
    int n, i, j,temp,flag=0;
    printf("\n how many terms:");
    scanf("%d", &n);
    int a[n];
    printf("\n store index element in the array\n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }
    printf("\n print the array is:");
    for (i = 0; i < n; i++)
    {

        printf("%d  ", a[i]);
    }
    printf("\n compare the value is:\n");
    for(j=0;j<n-1;j++){
         
        for(i=0;i<n-j-1;i++){
            if (a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp; 
            flag=1;
             
            }    
           
        }
    }
    printf("\n final sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
         
    }
  
    if (flag==0)
    {
       printf("\n the value already sorted.\n");
    }
    

    return 0;
}