/* Program for

***
**
*

*/


#include <stdio.h>
int main()
{
 int i,j;
 char ch='*';
 
 for(i=5;i>=0;i--)
 {
  for(j=0;j<=i;j++)
  printf("%c ",ch);
 
 printf("\n\n");
 }
 return 0;
}
