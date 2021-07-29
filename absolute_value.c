#include <stdio.h>
int main()
{
 int num,num1;
 
 printf("Enter a number: ");
 scanf("%d", &num);
 
 if(num<0)
 {
  num1=num/(-1);
  printf("Absolute of a %d is %d: ",num,num1);
 }
 else
 printf("Absolute of a %d is %d: ",num,num);
  
   return 0;
}
