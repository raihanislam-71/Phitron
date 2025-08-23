#include <stdio.h>
int main()
{
    int x =10;
    int *ptr = &x;

    *ptr = 200;

    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%d\n",sizeof(ptr));
    return 0;
}