#include<stdio.h>
#include<conio.h>
int main()
{      	int a,b,c;
	
	printf("Enter your First number: ");
	scanf("%d",&a);
	printf("Enter your Second number: ");
	scanf("%d",&b);

		printf("Enter your choice:\n");
		printf("1-Area of Triangle\n2-Area of Reactangle\n3-Area of Circle\n");
		scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("Your Area of Triangle is : %d",a*b/2);
	break;
	case 2:
		printf("Your Area of Reactangle is : %d",a*b);
	break;
	case 3:
		printf("Your Area of Circle is : %d",b*b*3.14);
	break;

	default: printf("Invalid Choice");
	break;

	}


}