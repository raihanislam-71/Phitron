#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    if(n > 1000)
    {
        printf("I will buy Punjabi\n");
        if(n >= 1500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}