#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=1;
    b=2;
    printf("a=%d, b=%d\n",a,b);
    printf("a=%d, b=%d\n",a++,b);
    printf("a=%d, b=%d\n",a,++b);
    printf("a=%d, b=%d\n",a,b--);
    printf("a=%d, b=%d\n",a,b);
    c=a+b;
    printf("c=%d",c);
    return 0;
}
