#include <stdio.h>
int main()
{
 int a,b,c,l;
 
 printf("Enter 3 No.");
 scanf("%d%d%d",&a,&b,&c);
 
 l=a>b?(a>c?a:c):(b>c?b:c);
 
 printf("\nlargest no is:  %d",l);
}
