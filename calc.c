#include<stdio.h>

int add(int a, int b) {
    return (a+b);
    }
int sub(int a, int b) {
    return (a-b);
    }    
int mul(int a, int b) {
    return (a*b);
    }
float div(int a, int b) {
    return (float)a/(float)b;
    }              
int main()
{
    int x;
    int y;
    int result;
    float float_result;
    printf("enter first number:");
    scanf("%d", &x);
    printf("enter second number:");
    scanf("%d", &y);
    result= add(x,y);
    printf("add: %d\n", result);
    result= sub(x,y);
    printf("sub: %d\n", result);
    result= mul(x,y);
    printf("mul: %d\n", result);
    float_result= div(x,y);
    printf("div: %.10f", float_result);
}    