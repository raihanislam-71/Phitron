#include <stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if(n > 1000000) {
        printf("Input too large\n");
        return 0;
    }

    for(int i=1; i<=n; i++)
    {
        if(i%5==0)
        {
            printf("%d Yes\n",i);
    
        }
        else
        {
            printf("%d No\n",i);
        }
    }
    return 0;
}