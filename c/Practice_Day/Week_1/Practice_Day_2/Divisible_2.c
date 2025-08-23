#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);

    int i=7;
    while (i<=n)
    {
        if(i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
        i+=7;
    }
    
    return 0;
}