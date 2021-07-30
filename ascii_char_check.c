#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter a character : ");
	scanf("%c", &c);
	
	if(c>=65 && c<=90)
		printf("\n\nYou've entered a capital letter.");
	else if(c>=48 && c<=57)
		printf("\n\nYou've entered a number.");
	else if(c>=97 && c<=122)
		printf("\n\nYou've entered a small letter.");
	else
		printf("\n\nYou've entered a special symbol.");
	
	return 0;
}
