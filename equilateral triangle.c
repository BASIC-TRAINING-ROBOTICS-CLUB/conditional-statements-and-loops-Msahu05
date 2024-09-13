#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter side:");
    scanf("%d", &a);
    printf("enter side:");
    scanf("%d", &b);
    printf("enter side:");
    scanf("%d", &c);
    if (a==b && a==c) {
    printf("equilateral");
    }
    else {
    printf("not equi.");
    }
}