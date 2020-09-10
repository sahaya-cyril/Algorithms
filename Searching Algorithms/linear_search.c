//Linear Search problem

#include<stdio.h>

void main()
{
    int i,n,arr[100],search,flag=0;
    printf("Enter no. of elements element:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("Element found at index:%d",i);
            flag=1;
        }
    }
    while(flag != 1)
    {
        printf("Element not found");
        break;
    }
}
