#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tiger=0, pathan=0;
    for(int i=0; i<n; i++)
    {
        int t,p;
        scanf("%d %d",&t,&p);
        if(t>p)
        {
            tiger++;
        }
        else if(t<p)
        {
            pathan++;
        }
    }

    if(tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if(tiger < pathan)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}