#include <stdio.h>
#include <string.h>
int main()
{
    char a[1005],b[1005];
    scanf("%s",&a);
    strcpy(b,a);
    int i=0, j=strlen(a)-1;

    while (i<j)
    {
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }

    if(strcmp(a,b)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

////OR
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1005];
    scanf("%s",a);
    int i=0, j=strlen(a)-1;
    int flag=1;
    while (i<j)
    {
        if(a[i] != a[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }
 
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}