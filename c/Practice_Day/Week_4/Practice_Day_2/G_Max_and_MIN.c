#include <stdio.h>

void MN(int arr[],int n){
    int min = arr[0], max = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    } 
    printf("%d %d\n",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    MN(arr,n);
    
    return 0;
}
