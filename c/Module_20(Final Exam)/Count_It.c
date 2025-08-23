#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    fgets(s,1005,stdin);

    int capital=0, small=0, spaces=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <='z')
        {
            small++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if(s[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",spaces);
    return 0;
}