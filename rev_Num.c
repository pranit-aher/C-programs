#include<stdio.h>

int main()
{
    int num, n, rev_num=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num!=0)
    {
        rev_num = rev_num * 10;

        rev_num = num % 10 + rev_num;

        num = num/10;
    }
    
    printf("Reversed Number of %d is %d\n",n, rev_num);

    if (n==rev_num)
        printf("Input Number %d & Reversed Number %d are equal", n, rev_num);
    else
        printf("Input Number %d & Reversed Number %d are not equal", n, rev_num);

   return 0;
}
