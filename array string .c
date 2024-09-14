#include <stdio.h>
int main()
{
    char name[]="Software";
    printf("%s\n", name);
    printf("%c\n", name[4]);
    
    char name2[]="software";
    for (int i=0; i<=8; i++) {
    printf("\n%s", name2[i]);
    }
}