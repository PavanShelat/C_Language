#include<stdio.h>

int main()
{
	int a;
	printf("Enter Any Year: \n");
	scanf("%i",&a);
	
	if(a%4==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
	
	return 0;
}

	