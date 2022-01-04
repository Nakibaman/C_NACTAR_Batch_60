#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5];
    int i;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&numbers[i]);
    }

    printf("\n Entered numbers are -\n");
    printf("{");
    for(i=0;i<=4;i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("}");
    return 0;
}
