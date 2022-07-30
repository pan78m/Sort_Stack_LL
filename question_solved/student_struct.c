#include <stdio.h>
#include <stdlib.h>
#define max 50
// user define types
struct student
{
    int id, session;
    char fname[max],lname[max];
};
// void inputS(struct student a,struct student b){
//     scanf("%d%d", &a.id, &b.id);
//     printf("\nenter the name of n1 student:\n");
//     scanf(" %s", a.name);
//     printf("\nenter the name of n2 student:\n");
//     scanf(" %s",b.name);
//     printf("\nenter the session of n1 &n2 student:\n");
//     scanf("%d%d", &a.session, &b.session);
// }
// void printS(struct student n1,struct student n2){
//      printf("Id of the n1 student %d\nName of the n1 student %s\n session of the n1 student %d\n", n1.id, n1.name, n1.session);
//     printf("\nPrint the information student n2:\n");
//     printf("Id of the n2 student %d\nName of the n2 student %s\n session of the n2 student %d\n" ,n2.id, n2.name, n2.session);
// }
int main()
{
    struct student n1, n2;
    printf("\nenter the id n1 nad n2 student:\n");
    //inputS(n1,n2);
    scanf("%d%d", &n1.id, &n2.id);

    printf("\nenter the name of n1 student:\n");
    scanf(" %s%s", n1.fname,n1.lname);

    printf("\nenter the name of n2 student:\n");
    scanf(" %s%s", n2.fname,n2.lname);

    printf("\nenter the session of n1 &n2 student:\n");
    scanf("%d%d", &n1.session, &n2.session);

    printf("\nPrint the information student n1:\n\n\n");
    printf("Id %d\nName %s %s\nsession %d\n", n1.id, n1.fname,n1.lname, n1.session);
    printf("\nPrint the information student n2:\n\n\n");
    printf("Id %d\nName %s %s\nsession %d\n" ,n2.id, n2.fname,n2.lname, n2.session);
    //printS(n1,n2);
    return 0;
}