#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    scanf("%s",&a);

    int l = strlen(a);

    int count = 1;
    for(int i=0; i<l/2; i++)
    {
        if(a[i] = a[l-1-i])
        {
            count = 0;
        }
    }
    if(count == 0)
    {
        printf("Palindrome");
    }
    if(count == 1)
    {
        printf("Not Palindrome");
    }

    return 0;
}