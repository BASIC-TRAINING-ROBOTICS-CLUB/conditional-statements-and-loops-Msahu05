#include<stdio.h>

int main()
{
    int x,y,z;
    printf("enter x:");
    scanf("%d", &x);
    printf("enter y:");
    scanf("%d", &y);
    printf("enter z:");
    scanf("%d", &z);
    if (x>=y && x>=z) {
    printf("x is max");
    }
    else if (y>=z) {
    printf("y is max");
    }
    else {
    printf("z is max");
    } 
}   