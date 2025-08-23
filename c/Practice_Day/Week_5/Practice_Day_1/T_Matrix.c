#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int cnt_1 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                cnt_1 += arr[i][j];
            }
        }
    }
    
    int cnt_2 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                cnt_2 += arr[i][j];
            }
        }
    }

    printf("%d",abs(cnt_1 - cnt_2));
    return 0;
}