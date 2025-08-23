#include <stdio.h>

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s = x + y;
    return s;
}



int main()
{
    
    int s =sum();
    printf("%d",s);

    int c = sum(100);
    printf("%d",c);
    return 0;
}

// int sum(void)
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int c = a + b;
//     return c;
// }

// int main()
// {
    
//     int c = sum(100);
//     printf("%d",c);
//     return 0;
// }



