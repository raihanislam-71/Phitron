#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000005];
    scanf("%s",s);

    int sum=0;
    for(int i=0; i<strlen(s); i++)
    {
        int val = s[i]-'0';
        sum = sum + val;
    }
    printf("%d",sum);

    return 0;
}