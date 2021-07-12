#include <stdio.h>
int main()
{ 
 int a,b,t;
 printf("Enter values for a & b to be swapped: ");
 scanf("%d%d",&a,&b);
 
 t=a;
 a=b;
 b=t;
 printf("\nAfter Swapping: a=%d and b=%d",a,b);
 return 0;
}

