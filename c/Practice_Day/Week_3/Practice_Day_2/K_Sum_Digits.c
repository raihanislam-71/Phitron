#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char s[1000005];
    scanf("%s",s);

    int sum=0;
    for(int i=0; i<n; i++)
    {
        int val = s[i]-'0';
        sum = sum + val;
    }
    printf("%d",sum);

    return 0;
}