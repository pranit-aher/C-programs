// Addition of 2+4+6+8...
#include <stdio.h>
int main()
{
 int n,i,t,sum=0;
 printf("Enter series range: ");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  t=2*i;
  printf("%d",(t));
  if(i<n)
  {
  printf("+");
  }
  sum=sum+t;
 }
 printf("\nSum of series is: %d",sum);
}
