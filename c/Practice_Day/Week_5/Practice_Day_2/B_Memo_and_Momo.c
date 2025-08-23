#include <stdio.h>
int main()
{
    long long int me , mo , n;
    scanf("%lld %lld %lld",&me,&mo,&n);

    if(me%n==0 && mo%n==0)
    {
        printf("Both");
    }
    else if(me%n==0)
    {
        printf("Memo");
    }
    else if(mo%n==0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    return 0;
}