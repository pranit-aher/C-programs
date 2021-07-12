#include "stdio.h"
int swap(int, int);
int main()
{ 
  int a=10,b=20;
  printf("\nBefore Swapping: a=%d and b=%d",a,b);
  
  swap(a,b);
  printf("\nAfter Swapping: a=%d and b=%d",a,b);
}

int swap(int a, int b)
{
 int t;
 t=a;
 a=b;
 b=t;
}
