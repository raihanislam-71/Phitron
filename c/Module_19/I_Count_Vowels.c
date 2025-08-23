#include <stdio.h>
int fun(char n[], int i)
{
    if(n[i] == '\0')
    {
        return 0;
    }
    int ans = fun(n,i+1);
    if(n[i] >= 'A' && n[i] <= 'Z')
    {
        n[i] = n[i]+32;
    }
    if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char n[205];
    fgets(n,205,stdin);
    int cnt = fun(n,0);
    printf("%d\n",cnt);
    return 0;
}