#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<s; j++)
            {
                printf(" ");
            }
            for(int j=0; j<k; j++)
            {
                printf("^");
            }
            s--;
            k=k+2;
            printf("\n");
        }
        else
        {
            for(int j=0; j<s; j++)
            {
                printf(" ");
            }
            for(int j=0; j<k; j++)
            {
                printf("*");
            }
            s--;
            k=k+2;
            printf("\n");
        }
    }
    return 0;
}