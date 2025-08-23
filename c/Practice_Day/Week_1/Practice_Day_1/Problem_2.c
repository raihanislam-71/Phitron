#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d %d", &a , &b);

    int add = a + b;
    int sub = a - b;
    int mult = a * b;
    float div =(1.00 * a) / (b *1.00);

    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mult);
    printf("%d / %d = %0.2f\n",a,b,div);

    return 0;
}