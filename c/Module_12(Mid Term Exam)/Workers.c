#include <stdio.h>
int main()
{
    int M1 , M2 , D;
    scanf("%d %d %d",&M1,&M2,&D);

    int new_D = (M1 * D) / M2;
    printf("%d",new_D);
    return 0;
}
