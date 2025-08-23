#include <stdio.h>

int main()
{
    char a;
    int count=0;
    while(scanf("%c",&a) != EOF)
    {
        if(a =='a' || a =='e' || a == 'i' || a == 'o' || a == 'u')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}