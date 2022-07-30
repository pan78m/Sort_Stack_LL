#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int convert(long long);

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-06-21 (11:10)
 *
 * @returns int
 */
int main()
{
      // Let's start here
    long long n, decimal;
    printf("\n Enter the binary Number:\n");
    scanf("%lld", &n);
    decimal = convert(n);
    printf("%lld the binary to decimal is:%d", n, decimal);
    return 0;
}
int convert(long long n)
{
    int dec = 0, rem, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
