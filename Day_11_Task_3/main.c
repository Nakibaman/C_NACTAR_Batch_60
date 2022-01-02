#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=1;
    do
    {
        if(i%2==1)
            printf("%d \n",i);
        i++;
    }while(i<=0);

    return 0;
}

