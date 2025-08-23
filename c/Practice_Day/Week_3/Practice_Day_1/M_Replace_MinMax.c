#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN, min = INT_MAX;

    int idx_max ;
    int idx_min ;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            idx_max = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            idx_min = i;
        }
    }

    int tmp = arr[idx_min];
    arr[idx_min] = arr[idx_max];
    arr[idx_max] = tmp;
    
    for(int i=0; i<n; i++)
    {
        
        printf("%d ",arr[i]);
    }
    return 0;
}