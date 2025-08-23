#include <stdio.h>
int main()
{
    int x =10;
    printf("%p\n",&x);

    int* ptr = &x;
    printf("%p\n",ptr);

    // dereference
    printf("%d\n",*ptr);
    return 0;
}