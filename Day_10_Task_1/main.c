#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arekta;
    printf("Enter a value");
    scanf("%d",&arekta);
    if(arekta>20)
        printf("The value is greater than 20");
    else if(arekta==20)
        printf("The value is equal to 20");
    else
        printf("The value is smaller than 20");
    return 0;
}
