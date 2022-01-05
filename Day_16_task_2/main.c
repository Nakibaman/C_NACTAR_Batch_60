#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table[4][3];
    int i,j;
    printf("Enter values ");
    for(j=0;j<=3;j++)
    {
        for(i=0;i<=2;i++)
        {
            printf("[%d][%d]=",j,i);
            scanf("%d",&table[j][i]);
        }
    }
    printf("\n");
    for(j=0;j<=3;j++)
    {
        for(i=0;i<=2;i++)
        {
            printf("%d ",table[j][i]);
        }
        printf("\n");
    }
    return 0;
}

