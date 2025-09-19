#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a, max = INT_MIN , min = INT_MAX;

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a > max)
        {
            max = a;
        }
        if(a < min)
        {
            min = a;
        }
    }
    printf("%d %d",min,max);
    return 0;
}
// #include <stdio.h>

// void findMinMax(int arr[], int n) {
//     int min = arr[0], max = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min)
//             min = arr[i];
//         if (arr[i] > max)
//             max = arr[i];
//     }

//     printf("%d %d\n", min, max);
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n]; 

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     findMinMax(arr, n);

//     return 0;
// }