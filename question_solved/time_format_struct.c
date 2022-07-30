#include <stdio.h>
#include <stdlib.h>
#define max 50
// user define types
struct time_format
{
    int hr, min, sec;
};

int main()
{
    struct time_format n;
    printf("\nenter the time for hour:\n");
    scanf("%d", &n.hr);
    printf("\nenter the time for minutes:\n");
    scanf("%d", &n.min);
    printf("\nenter the time for second:\n");
    scanf("%d", &n.sec);
    printf("\nprint the time format:\n");
    printf("%d:%d:%d", n.hr + 12, n.min, n.sec);

    return 0;
}