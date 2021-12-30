#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=20;i=i+9)
        printf("%d : Hello world!\n",i);
    printf("Last value of i is %d",i);
    return 0;
}
