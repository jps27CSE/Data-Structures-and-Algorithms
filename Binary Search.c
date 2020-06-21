#include<stdio.h>
int main()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};

    int left=0;
    int right=15; //Index length,,,(n-1)

    int mid;

    int search=1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(search==ara[mid])
        {
            break;
        }
        if(search<ara[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
        
    }
    if(left>right)
    {
        printf("%d is not in the array\n",search);
    }

    else
    {
        printf("%d is found in the array .It is the %d th element of the array\n",ara[mid],mid+1);
    }
}