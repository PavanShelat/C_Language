#include<stdio.h>

int main()
{
	
	int arr[]={4,3,5,2,1};
	int a,i,j,x=0;
	
	a=sizeof(arr)/sizeof(arr[0]);
	
	
	printf("Elements of original array : ");
	for(i=0;i<a;i++)
	{
		
		printf("%d",arr[i]);	
		
		
	}
	
	
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			
			if(arr[i]>arr[j])
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
							
			}			
			
		}
	}
	
	printf("\n\n Elements of array in ascending order : ");
	
	for(i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
	
}