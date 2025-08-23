#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int n;
    scanf("%d",&n);

    int flag = 1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == n)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}