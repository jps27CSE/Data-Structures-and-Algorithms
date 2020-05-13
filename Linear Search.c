#include<stdio.h>
int main()
{
	int array[100],i,search,n;

	printf("Enter elements in Array =");
	scanf("%d",&n); //input a Number 

	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]); //Array elements input 

	}

	printf("Enter the Number you want to search");
	scanf("%d",&search); //input the number you want to search


	for(i=0;i<n;i++)
	{
		if(array[i]==search)
		{
			printf("%d is present at =%d\n",search,i+1);
			break;
		}
		
		
		if (i==n)
		{
			printf("Error");
		}
		

	}

}