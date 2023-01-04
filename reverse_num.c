#include<stdio.h>
int main()
{
	int number,rem,result=0; 
    printf("Enter any number : ");
    scanf("%i",&number);
	while(number!=0)
	{
		rem = number%10;
		
		result = result*10+rem; 
		
		number = number/10; 
	}
	
	printf("%i\n\n",result);
 
	
	
	
	return 0;
}