/* Program for
***
**
*
*
**
***

*/
#include <stdio.h>
int main()
{
 int i,j;
 char ch='*';
 
 for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  printf("%c ",ch);
 
  printf("\n");
 }
 
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=i;j++)
  printf("%c ",ch);
 
 printf("\n");
 }
 
 return 0;
}
