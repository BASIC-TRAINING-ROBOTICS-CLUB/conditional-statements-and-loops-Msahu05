#include <stdio.h>

int main()
{
    int n, sum=0, digit, count=0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n>0){
    digit=n%10;
    sum+=digit;
    count++;
    n/=10;
    }
    printf("sum= %d \n", sum);
    printf("count= %d", count);
}