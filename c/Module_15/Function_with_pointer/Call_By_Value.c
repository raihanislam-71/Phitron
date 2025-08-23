#include <stdio.h>
void fun(int x)
{
    x = 100;
    printf("fun x ar value -%d\n",x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("main x ar value -%d\n",x);
    return 0;
}