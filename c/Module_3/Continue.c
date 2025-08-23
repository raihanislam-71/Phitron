#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

