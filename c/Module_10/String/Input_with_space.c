// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[15];
//     gets(a);  // input ne ar jonno aita bebohar kora hoi
//     printf("%s",a);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    fgets(a,15,stdin); // ai khane 15 dara tumi String ar koto thoko print korte chao tai bojai
    a[12] = '\0';  // Enter ignor kora hoi aita dara 
    printf("%s",a);
    return 0;
}