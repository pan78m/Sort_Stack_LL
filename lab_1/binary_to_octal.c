#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int convert(long long);
 /**
  * @brief description
  * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
  * @date 2022-06-21 (11:18)
  * 
  * @returns int
  */

int main()
{
     // Let's start here
     long long n,octal;
     printf("\n enter the binary number is:\n");
     scanf("%lld",&n);
     octal=convert(n);
     printf("%lld is the binary num and octal is:%d",n,octal);
     return 0;
}
int convert(long long n)
{
    int dec=0,oct=0,rem,i=0;
    while (n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem*pow(2,i);
        i++;
    }
    i=1;
    while (dec!=0)
    {
        oct+=(dec%8)*i;
        dec/=8;
        i*=10;
    }
    return oct;
}
  