#include <stdio.h>
int print(int i, int n)
{
    if(i == n+1) return 0;
    print(i+1,n);
    if(i>1)
    {
        printf("%d ",i);
    }
    else
    {
        printf("%d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}
