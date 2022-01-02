#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,row,col;
    printf("Enter row number:");
    scanf("%d",&row);
    printf("Enter column number:");
    scanf("%d",&col);
    for(j=1;j<=row;j++)
    {
        for(i=1;i<=col;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
