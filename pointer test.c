#include <stdio.h>
int main()
{
int a=10;
int *p;
printf("%d\n", a);
p=&a;
printf("%p\n", (void*)p);
printf("%d\n", *p);
printf("%p\n", (void*)&p);
}