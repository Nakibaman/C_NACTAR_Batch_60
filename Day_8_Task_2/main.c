#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=1;
    signed int c;

    c=a|b;
    printf("a bitwise or b = %d",c);

    c=a&b;
    printf("\n a bitwise and b = %d",c);

    c=54;
    c=~c;
    printf("\n %d",c);

    return 0;
}
