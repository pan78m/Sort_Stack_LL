#include <stdio.h>
#include <stdlib.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-25 (22:01)
 * 
 * @returns int
 */

int main()
{
     // Let's start here
    int n;
    printf("\nHow many value store:\n");
    scanf("%d",&n);

	int i,a[n],b[n],sum[n];
	printf("Enter first array:-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);	
		scanf("%d",&a[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<n;i++)
	{
		printf("b[%d]=",i+1);	
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<n;i++)
	{
		printf("\nsum[%d]=%d",i+1,sum[i]);	
	}
		
     return 0;
}