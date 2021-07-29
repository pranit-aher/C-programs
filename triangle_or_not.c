#include <stdio.h>
int main()
{
 double ang1, ang2, ang3, trng;
 
 printf("Enter the degrees of angles of triangle: ");
 scanf("%lf%lf%lf",&ang1,&ang2,&ang3);
 
 trng=ang1+ang2+ang3;
 
 if(trng==180)
  printf("This is triangle");
  
 else
 printf("This is not triangle");
 
 return 0;
}
