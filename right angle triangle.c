#include<stdio.h>

int main()
{
    int a, b, c;
    printf("enter hypotenuse side:");
    scanf("%d", &a);
    printf("enter second side:");
    scanf("%d", &b);
    printf("enter third side:");
    scanf("%d", &c);
    
    if (a*a == b * b + c * c) {
    printf("right angled\n");
    }
    else {
    printf("not right angled\n");
    }
}


//int hypo, side1, side2;
  //  if (a>=b && a>=c){
   // hypo=a;
  //  side1=b;
   // side2=c;
  // }
   // else if (b>=a && b>=c){
    //hypo=b;
    //side1=a;
   // side2=b;
   // }
    //else {
   // hypo=c;
   // side1=a;
   // side2=b;
   //} 