#include<stdio.h>

int main()
{
    char c;
    printf("enter char:");
    scanf("%c", &c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
    printf("%c is vowel", c);
    }
    else {
    printf("%c consonant",c);
    }
}