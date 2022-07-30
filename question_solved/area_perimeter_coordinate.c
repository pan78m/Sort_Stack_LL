#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void print(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    printf("\nenter the the value of x1 ,y1\n");
    printf("x1=%d y1=%d", x1, y1);

    printf("\nenter the the value of x2 ,y2\n");
    printf("x2=%d y2=%d", x2, y2);

    printf("\nenter the the value of x3 ,y3\n");
    printf("x3=%d y3=%d", x3, y3);

    printf("\nenter the the value of x4 ,y4\n");
    printf("x4=%d y4=%d", x4, y4);
}
void printA(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int area = ((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1) - (x2 * y1 + x3 * y2 + x4 * y3 + x1 * y4)) / 2;
    printf("Area is=%d\n", area);
}
void printP(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a, b;
    a = sqrt(((x1 - x2)*(x1 - x2))+ ((y1 - y2)* (y1 - y2)));
    b = sqrt(((x3 - x2)*(x3 - x2))+ ((y3 - y2)*(y3 - y2)));
    int perimeter = 2*a+2*b;
    printf("perimeter is=%d", perimeter);
    printf("\n\n");
}

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float area, perimeter, a, b;
    printf("\nenter the the value of x1 ,y1\n");
    scanf("%d %d", &x1, &y1);

    printf("\nenter the the value of x2 ,y2\n");
    scanf("%d %d", &x2, &y2);

    printf("\nenter the the value of x3 ,y3\n");
    scanf("%d %d", &x3, &y3);

    printf("\nenter the the value of x4 ,y4\n");
    scanf("%d %d", &x4, &y4);

    printf("\nprint the value of 4 point:\n");
    print(x1, x2, x3, x4, y1, y2, y3, y4);

    printf("\nprint the area of the rectangle:\n");
    printA(x1, x2, x3, x4, y1, y2, y3, y4);
    printf("\nprint the perimeter of the rectangle:\n");
    printP(x1, x2, x3,y1, y2, y3);

    return 0;
}