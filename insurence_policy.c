#include<stdio.h>
void main()
{
    int age,premium,max;
    char health,location,sex;
    printf("Enter health, age, location & gender of a person: ");
    scanf(" %c%d %c %c",&health,&age,&location,&sex);
    if((health=='e')&&(age>=25&&age<=35)&&(location=='c')&&(sex=='m'))
    {
        premium=4;
        max=2;
        printf("premium %d Rs per thousand and policy amount cannot exceed %d lakhs",premium,max);
    }
    else if((health=='e')&&(age>=25&&age<=35)&&(location=='c')&&(sex=='f'))
    {
        premium=3;
        max=1;
        printf("premium %d Rs per thousand and policy amount cannot exceed %d lakhs",premium,max);
    }
    else if((health=='p')&&(age>=25&&age<=35)&&(location=='v')&&(sex=='m'))
    {
        premium=6;
        max=10,000;
        printf("premium %d Rs per thousand and policy amount cannot exceed %d lakhs",premium,max);
    }
    else
        printf("person is not insured");
}
