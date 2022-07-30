/* C program to insert an element in an array */

#include <stdio.h>
/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-18 (07:57)
 * 
 * @returns int
 */

int main()
{
      int arr[10],i,size,posi,value;
      printf("enter the size how many array index:\n");
      scanf("%d",&size);
      for ( i = 0; i <size; i++)
      {
         printf("element-%d:",i+1);
         scanf("%d",&arr[i]);
      }
      printf("\nprint the orgilan array.\n");
       for ( i = 0; i <size; i++) 
      {
         printf("%4d",arr[i]);
         
      }
      printf("\n enter the position of index.\n");
      scanf("%d",&posi);
      printf("\n enter the value is:\n");
      scanf("%d",&value);
       for ( i = size; i >=posi-1; i--)
      {
          arr[i+1]=arr[i];
           
      }
      arr[posi-1]=value;
      printf("\n print the new store element.\n");
       for ( i = 0; i <=size; i++)
      {
         
         printf("%4d",arr[i]);
      }
     return 0;
}