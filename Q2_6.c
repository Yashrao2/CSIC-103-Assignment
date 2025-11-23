#include<stdio.h>
int main()
{
    printf("Yash Kumar , 125113026\n");
    int r,c,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int a[r][c],b[r][c],sum[r][c];
    printf("Enter elements of a:");
    for (i = 0; i<r; i++){
        for (j = 0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of b:");
    for (i = 0; i<r; i++){
        for (j = 0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i<r; i++){
        for (j = 0; j<c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrices is:");
    for (i = 0; i<r; i++)
    {
        for (j = 0; j<c; j++){
            printf("%d ",sum[i][j]);
        }
    }

return 0;
}