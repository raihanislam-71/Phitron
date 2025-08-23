#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    scanf("%s",s);

    int sl = strlen(s);
    int i=0, j=sl-1;
  
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }     
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");  
    return 0;
}