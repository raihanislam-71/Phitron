#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s %s",a,b);

    int sta = strlen(a);
    int stb = strlen(b);

    printf("%d %d\n",sta,stb);
    printf("%s%s\n",a,b);


    int tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s %s\n",a,b);
    return 0;
}