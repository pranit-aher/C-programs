#include <stdio.h>
void swap();
int main()
{ 
 swap();
}

void swap()
{
 int a;
 printf("Enter how many numbers to be swapped. \n 1.For 2 No. Enter 1. \n 2.For 3 No. Enter 2. \n 3.For 4 No. Enter 3. ");
 printf("\n Enter Your Choice:  ");
 scanf("%d",&a);
 
 
 switch(a)
{
 case 1:
 {
   int a,b;
   printf("Enter values for a & b to be swapped: ");
   scanf("%d%d",&a,&b);
 
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nAfter Swapping: a=%d and b=%d",a,b);
   break;
 }
 
 case 2:
 {
   int a,b,c;
   printf("Enter values for a, b & c to be swapped: ");
   scanf("%d%d%d",&a,&b,&c);
 
   a=a+b+c;
   b=a-b-c;
   c=a-b-c;
   a=a-b-c;
   printf("\nAfter Swapping: a=%d, b=%d & c=%d",a,b,c);
   break;
 }
 
 case 3:
 {
   int a,b,c,d;
   printf("Enter values for a,b,c & d to be swapped: ");
   scanf("%d%d%d%d",&a,&b,&c,&d);
 
   a=a+b+c+d;
   b=a-b-c-d;
   c=a-b-c-d;
   d=a-b-c-d;
   a=a-b-c-d;
   printf("\nAfter Swapping: a=%d, b=%d, c=%d, d=%d",a,b,c,d);
   break;
 }
 
 default:
  printf("\n You Entered Wrong Choice.");
  return swap(); 
  break;
 }
}
