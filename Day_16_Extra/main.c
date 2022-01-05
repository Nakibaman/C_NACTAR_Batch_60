#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5};
    char input;
    int i;
    printf("Enter E to show Even numbers\n ");
    printf("Enter O to show Odd numbers");
    scanf("%c",&input);

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

    return 0;
}
