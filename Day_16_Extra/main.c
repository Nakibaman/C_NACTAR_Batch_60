#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5};
    char input;
    int i;
    while(1)
    {
    printf("\nEnter E to show Even numbers\n");
    printf("Enter O to show Odd numbers\n");
    printf("Enter Q to close this application\n");
    printf("\nType your choice :");
    scanf("%c",&input);
    scanf("%c");
    if(input=='E')
    {
        for(i=0;i<=4;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d ",a[i]);
            }
        }
    }
    else if(input=='O')
    {
        for(i=0;i<=4;i++)
        {
            if(a[i]%2==1)
            {
                printf("%d ",a[i]);
            }
        }

    }
    else if(input=='Q')
    {
        break;
    }
    else
    {
        printf("\nInvalid Input!!!!!!!!");
    }
    }
    return 0;
}
