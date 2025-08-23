#include <stdio.h>
#include <string.h>
int main()
{
    char a[25],b[25];
    scanf("%s %s",a,b);
    int n = strcmp(a,b);
    
    if(n > 0)
    {
        printf("%s",b);
    }
    else if(n < 0)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",a);
    }
    return 0;
}