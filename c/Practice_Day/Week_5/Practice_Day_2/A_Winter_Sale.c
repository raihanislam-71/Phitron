#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);

    // 80/(1-(20/100)) = 100.00
    // 20/(1-(15/100)) = 23.53
    
    float x = b/(1-(a/100));

    printf("%0.2f",x);
    return 0;
}