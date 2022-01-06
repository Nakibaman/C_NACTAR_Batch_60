#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    printf("Enter the values of matrix A\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the values of matrix B\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The values of matrix C is :\n");
     for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
