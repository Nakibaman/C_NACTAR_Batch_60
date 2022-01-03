#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,mid,number;
    number=0;
    printf("Enter the square size:");
    scanf("%d",&n);
    mid=(n+1)/2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1||i==n||j==1||j==n||i==j||i==(n+1-j))
            {
                printf("*");
            }
            else
            {
                if(number==10)
                {
                    number=0;
                    printf("%d",number++);
                }
                else
                {
                    printf("%d",number++);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
