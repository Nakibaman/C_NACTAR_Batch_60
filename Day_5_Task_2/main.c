#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    printf("Enter a lowercase character:");
    scanf("%c",&x);
    y=x-32;
    printf("The upper of the character is: %c",y);
    return 0;
}
