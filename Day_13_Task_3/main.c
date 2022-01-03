#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,row;
    printf("Enter row number:");
    scanf("%d",&row);
    for(j=1;j<=row;j++)
    {
        for(i=row;i>=j;i--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

