#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[105];
    for(int i=0; i<n; i++)
    {
        scanf("%s",a);
        int b = strlen(a);
        if(b <= 10)
        {
            printf("%s\n",a);
        }
        else
        {
            int ft = a[0];
            int c = b-2;
            int lt = a[b-1];
            printf("%c%d%c\n",ft,c,lt);
        }
    }
    return 0;
}