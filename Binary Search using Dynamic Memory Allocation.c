#include<stdio.h>
#include<stdlib.h>
int main()
{
    int search,i,size;
    int *array;

    printf("Enter the array size: ");
    scanf("%d",&size);

    array=(int*)malloc(size*sizeof(int));

    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d",&search);

    int left=0;
    int right=size-1;
    int middle;

    while(left<=right)
    {
       middle=(left+right)/2;

       if(array[middle]<search)
       {
           left=middle+1;
       }
       
       else if(array[middle]==search)
       {
           break;
       }

       else
       {
           right=middle-1;

       }
    }

    if(left>right)
    {
        printf("Error");
    }

    else
    {
        printf("%d is found in the array .It is the %d th element of the array\n",array[middle],middle+1);
    }
    
}