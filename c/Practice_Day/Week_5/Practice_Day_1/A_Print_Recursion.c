#include <stdio.h>
void print(int i,int n)
{
    if(i== n) return;
    printf("I love Recursion\n");
    print(i+1,n);
}    
int main()
{
    int n;
    scanf("%d",&n);
    print(0,n);
    return 0;
}