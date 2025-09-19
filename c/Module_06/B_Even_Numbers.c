#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
    }
    else
    {
        for(int i=2; i<=n; i=i+2)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
    }    
    return 0;
}