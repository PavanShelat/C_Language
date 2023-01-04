#include<stdio.h>
int main()
{
	
	int n1=34,n2=44,n3=45;

	
	if(n1>n2 && n1>n3)
	{
		printf("%i",n1);
	}	
	else if(n2>n3)
	{
		printf("%i",n2);
	}
	
	else
	{
		printf("%i",n3);
	}
	
	
	return 0;
}