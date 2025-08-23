#include <stdio.h>

int main()
{
    char a;
    int small=0;
    int capital=0;
    while(scanf("%c",&a) != EOF)
    {
        if(a >='a' || a >= 'z' )
        {
            small++;
        }
        else if(a >= 'A' || a >= 'Z')
        {
            capital++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}