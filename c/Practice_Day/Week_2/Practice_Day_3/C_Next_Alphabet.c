#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a == 'z')
    {
        printf("a");
    }
    else if(a >= 'a' || a <= 'y')
    {
        printf("%c", a+1);
    }
    return 0;
}