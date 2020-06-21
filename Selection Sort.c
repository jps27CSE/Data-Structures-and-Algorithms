#include<stdio.h>
int main()
{
    int temp=0,i,j,n,index_min;

    int array[100];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);


    }

    for(i=0;i<n-1;i++)
    {
        index_min=i;

        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[index_min])
            {
                index_min=j;
            }
            
        }
        if(index_min !=i)
            {
                temp=array[i];
                array[i]=array[index_min];
                array[index_min]=temp;

            }
    }

   printf("Sorted list in ascending order:\n");

   for(i=0;i<n;i++)
   {
       printf("%d\n",array[i]);
   }
}