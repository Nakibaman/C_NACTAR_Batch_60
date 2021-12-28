#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Enter a character:");
    scanf("%c",&input);
    if(input=='a'||input=='A')
        printf("The character is a/A");
    else
        printf("The character is not a/A");
    return 0;
}
