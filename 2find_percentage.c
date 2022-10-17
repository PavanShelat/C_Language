#include<stdio.h>

int main()

{
	int math,eng,phy,chem,comp;
	float percentage,total_marks;
	
	printf("Enter your maths marks: ");
	scanf("%i",&math);
	
	printf("Enter your physics marks: ");
	scanf("%i",&phy);
	
	printf("Enter your chemistry marks: ");
	scanf("%i",&chem);
	
	printf("Enter your english marks:");
	scanf("%i",&eng);
	
	printf("Enter your computer marks: ");
	scanf("%i",&comp);
	
	total_marks=math+phy+chem+eng+comp;
	printf("\n\nYour total marks are: %.f",total_marks);
	
	percentage=total_marks/5;
	printf("\n\nYour percentage is: %.2f\n",percentage);
	
	if(percentage>75)
	{
		printf("Distinction");
	}
	else if(percentage>60)
	{
		printf("First Class");
	}
	else if(percentage>50)
	{
		printf("Second Class");
	}
	else if(percentage>35)
	{
		printf("Pass Class");	
	}
	else
	{
		printf("Fail");
	}
	
	
	
	return 0;
}