#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=n; i<=n; i++)
    {
        for(int j=1; j<=12; j++)
        {
            int sum = i * j;
            printf("%d * %d = %d\n",i,j,sum);
        }
    }
    return 0;
}