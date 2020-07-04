#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,size,search,i,count=0;

	printf("Size of array:");
	scanf("%d",&size);

	array=(int*)malloc(size*sizeof(int));

	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Enter the number you want to search: ");
	scanf("%d",&search);

	for(i=0;i<size;i++)
	{
		if(array[i]==search)
		{
			printf("Number is at index of %d",i+1);
			count++;
		}

		
	}
	if(count==0)
	{
		printf("Error");
	}
}