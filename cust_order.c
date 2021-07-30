
#include<stdio.h>
int main()
{
   
    int stock=100, ord;
    char crd;

    printf("Is his credit is ok? (Press y/n)\n");
    scanf("%c",&crd);

   
    printf("Enter the customer Order: ");
   scanf("%d",&ord);
   
   
    
    if((crd == 'y' || crd == 'Y') && ord<=stock) 
        printf("Sir,\n\t We supplied your requirement\n\t\t Quantity: %d",ord);

    
    else if(ord>stock && crd == 'y' || crd == 'Y')
        printf("Sir,\n\t We supplied %d products and balance will be shipped later.",stock);
    else
        printf("Sir,\n\t Please first clear your credit, until we can't supply you any more.");
}
