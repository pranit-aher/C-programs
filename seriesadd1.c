// Addition of 1+2+3+4+5...
#include <stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter series range: ");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  printf("%d",i);
  if(i<n)
  {
  printf("+");
  }
  sum=sum+i;
 }
 printf("\nSum of series is: %d",sum);
}
