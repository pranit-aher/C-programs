#include <stdio.h>
int main()
{
 int a,b,c,l;
 
 printf("Enter ages of Ram, Shyam, Ajay: ");
 scanf("%d%d%d",&a,&b,&c);
 

   l= a<b?(a<c?a:c):(b<c?b:c);
 
 if(l==a)
   printf("\nRam is youngest\n");
 else if(l==b)
   printf("\nShyam is youngest\n");
 else
   printf("\nAjay is youngest\n");

 return 0;
}
