#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int a, count=0;
    scanf("%d",&a);
    for(int i=0; i<n; i++)
    {
        if(arr[i]== a)
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}