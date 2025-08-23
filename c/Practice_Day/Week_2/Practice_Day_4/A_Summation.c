// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     long long sum = 0;
//     for(int i=0; i<n; i++)
//     {
        
//         sum+=arr[i];
//     }  
//     printf("%lld",llabs(sum));
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        
        sum+=arr[i];
    }  
    if(sum > 0)
    {
        printf("%lld",sum);
    }
    else
    {
        long long int a = sum * -1 ;
        printf("%lld",a);
    }
    return 0;
}