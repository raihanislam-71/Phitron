#include <stdio.h>
int main()
{
    int a ;
    scanf("%d",&a);
    int x = a/1000;
    if(x%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}