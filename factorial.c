#include<stdio.h>

int main()
{
    int a=1,n;
    printf("enter num:");
    scanf("%d",  &n);
    for (int i=1; i<=n;i++){
    a=a*i;
    }
    printf("%d", a);
}  