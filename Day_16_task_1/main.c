#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int i,j;
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
