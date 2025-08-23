
#include <stdio.h>
// return_type name(parameter)
// {
//     code
//     return what?
// }

int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}

int main()
{
    int st = sum(10,10);
    printf("%d\n",st);
    
    st = sum(100,200);
    printf("%d\n",st);
    
    return 0;
}