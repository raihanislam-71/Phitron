#include <stdio.h>
int main()
{
    char n[100005];
    scanf("%s",n);

    for(int i=0; n[i] !='\0'; i++)
    {

        if(n[i] == ',')
        {
            printf(" ");
        }
        else if (n[i] >='a' && n[i] <='z')
        {
            int ans = n[i]-32;
            printf("%c",ans);  
        }
        else if(n[i] >='A' && n[i] <='Z')
        {
            int ans = n[i]+32;
            printf("%c",ans);
        }
        else
        {
            printf("%c",n[i]);
        }
    }
    printf("\n");
    return 0;
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char n[100005];
//     scanf("%s",n);

//     for(int i=0; n[i] !='\0'; i++)
//     {

//         if(n[i] == ',')
//         {
//             printf(" ");
//         }
//         else if (islower(n[i]))
//         {
//             printf("%c",toupper(n[i]));  
//         }
//         else if(isupper(n[i]))
//         {
//             printf("%c",tolower(n[i]));
//         }
//         else
//         {
//             printf("%c",n[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }