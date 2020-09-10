//Binary Search

#include <stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to find: ");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    mid = (low + high)/2;
    while(low<=high)
    {
        if(array[mid] == key)
        {
            printf("Integer found at index %d",mid + 1);
            break;
        }
        else if(array[mid] > key)
        {
            high = mid - 1;
            mid = (low + high)/2;
        }
        else
            low = mid + 1;
            mid = (low + high)/2;
        if(low > high)
        {
            printf("Integer not found");
        }
    }
    return 0;
}
