#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=5;
    printf("a+=10 %d\n",a+=10);
    printf("a-=10 %d\n",a-=10);
    printf("a*=10 %d\n",a*=10);
    printf("a/=10 %d\n",a/=10);
    printf("a%=2 %d",a%=2);
    return 0;
}
