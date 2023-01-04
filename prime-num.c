#include<stdio.h>
int main()
{
	
	int a,b,c=0,d=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	
	c=a/2;
	for(b=2;b<=c;b++)
	{
		
		if(a%b==0)
		{
		 	printf("Number is not prime...!");
		 	d=1;
		 	break;
		}
    }
	if(d==0)
	{
		printf("Number is prime...!");
	}
	return 0;
}
	
	
	
	
	