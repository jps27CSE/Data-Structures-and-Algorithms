#include<stdio.h>
int main()
{
    int n,arra[100],count=0,i,search;

    printf("Enter elements in Array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }

    printf("Enter the number you want to search");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(arra[i]==search)
        {
            printf("%d is present at location %d.\n", search, i+1);
            count++;
        }

    }

    if(count==0)
    {
        printf("Error");
    }

    else
    {
        printf("%d is present %d times in the array.\n",search,count);
    }
    
}