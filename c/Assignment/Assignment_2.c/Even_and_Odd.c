#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0 , count = 0;
    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            sum = sum + a;
        }
        else
        {
            count = count + a;
        }
    }
    printf("%d %d",sum , count);
    return 0;
}