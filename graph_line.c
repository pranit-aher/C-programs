#include <stdio.h>
int main()
{
 int x1,x2,x3,y1,y2,y3,m,n,m1,n1;
 
 printf("Enter the co-ordinates (x1,y1) (x2,y2) (x3,y3) : ");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 
 m=y3-y2;
 n=y2-y1;
 
 m1=x3-x2;
 n1=x2-x1;
 
 if(x1==y1 && x2==y2 && x3==y3)
 {
  printf(" All points are in one line\n");
  
 }
 
 else if(m==n && m1==n1)
 {
  printf(" All points are in one line\n");
  
 }
 
 else
 {
  printf(" points are not in one line\n");
 }
 
 return 0;
}
