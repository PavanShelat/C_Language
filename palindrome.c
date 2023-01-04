#include<stdio.h>
int main()
{
	int no,i,j,s=0,r,temp;
	printf("Enter Any no.:");
	scanf("%d",&no);   
	temp=no; 

	do
	{
		r=no%10;
		s=s*10+r; 
		no=no/10;
	}while(no>0);

	if(temp==s)
	{
		printf("Palindrome");
	}
	else
	{
		printf("no");
	}



	return 0;
}