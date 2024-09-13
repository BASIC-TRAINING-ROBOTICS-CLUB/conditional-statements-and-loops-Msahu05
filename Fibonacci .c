#include<stdio.h>

int main()
{
    int a=0, b=1, c=0, n;
    printf("enter num:");
    scanf("%d",  &n);
    while(c<=n) {
    a=b;
    b=c;
    printf("%d \n", c);
    c=a+b;
    }
}  