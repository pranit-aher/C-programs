#include<stdio.h>
void main()
{
	float time;
	printf("enter the time of the workers: ");
	scanf("%f",&time);
	if(time>=2&&time<3)
	{
		printf("The worker is highly efficient");
	}
	if(time>=3&&time<4)
	{
		printf("The worker need to be improved");
	}
	if(time>=4&&time<5)
	{
		printf("The worker need to attend training to improve his speed ");
	}	 
	if(time>=5)
	{
		printf("The worker is terminated");
	}
}
