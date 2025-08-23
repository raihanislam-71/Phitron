#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d %d",&a,&b);
    int c = a -b;
    if(c >= 0)
    {
        printf("%d",c);
    }
    else
    {
        printf("0");
    }
    return 0;
}