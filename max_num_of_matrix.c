#include<stdio.h>

int main()
{
	
	int a[3][3],i,j,max;
	
	printf("Enter any matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
			
		}
	}
	
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			if(max<a[i][j])
			{
			 max=a[i][j];
			}
		}
		
		
		printf("\nMaximum element is : %d",max);
		
		return 0;
	}
	
}