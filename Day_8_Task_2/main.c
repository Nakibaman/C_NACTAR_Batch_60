#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=1;
    int c;

    c=a|b;
    printf("a bitwise or b = %d",c);

    c=a&b;
    printf("\na bitwise and b = %d",c);

    return 0;
}
