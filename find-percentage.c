#include<stdio.h>
int main()
{
	int phy,chem,math;
	
	float percentage,total_marks;
	
	printf("Enter marks of Physics:");
	scanf("%i",&phy);
	
	printf("Enter marks of Chemistry:");
	scanf("%i",&chem);
	
	printf("Enter marks of Maths:");
	scanf("%i",&math);
	
	printf("physics = %i\nchemistry=%i\nMaths=%i",phy,chem,math);	
	
	
	total_marks = phy+chem+math;//234
	
	printf("\n\nTotal marks = %.f",total_marks);
	
	percentage = total_marks/3;
	
	printf("\n\nPercentage = %.2f",percentage);
	
	if(percentage>=90)
	{
		printf("\nGrade A...!");
	}
	else if(percentage>=80 )
	{
		printf("\nGrade B...!");
	}
	else if(percentage>=70 )
	{
		printf("\nGrade C...!");
	}
	else if(percentage>=60 && percentage<=50)
	{
		printf("\nGrade D...!");
	}
	
	else
	{
		printf("\nGrade F...!");
	}
	
	return 0;
}

