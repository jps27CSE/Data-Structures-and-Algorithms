#include<stdio.h>
int main()
{
    int n,i,j,swap,array[100];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;

            }
        }
    }

    for(i=0;i<n-1;i++)
    {
        printf("%d\n",array[i]);
    }
}