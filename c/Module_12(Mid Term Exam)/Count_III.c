#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    scanf("%s",s);

    int cnt[26]={0};
    for(int i=0; i<strlen(s); i++)
    {
        cnt[s[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        printf("%C - %d\n",i+'a',cnt[i]);
    }
    return 0;
}
