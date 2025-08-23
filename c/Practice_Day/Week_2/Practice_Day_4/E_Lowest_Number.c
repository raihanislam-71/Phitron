#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min = INT_MAX;
    int pos;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d\n",min,pos);
    return 0;
}