#include <stdio.h>
int main()
{
    int row , col;
    scanf("%d %d",&row,&col);
    int arr_1[row][col], arr_2[row][col], arr_3[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr_1[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr_2[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        } 
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",arr_3[i][j]);
        } 
        printf("\n");
    }

    return 0;
}