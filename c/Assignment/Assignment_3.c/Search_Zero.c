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

    int count = 0;
    for(int i=0; i<n; i++)
    {

        if(arr[i]==0)
        {
            break;
        }
        if(arr[i] != 0)
        {
            count++;
        }

    }

    printf("%d",count);
    return 0;
}