#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Enter a character:");
    scanf("%c",&input);
    if(input>='a'&&input<='z')
        printf("Lowercase");
    if(input>='A'&&input<='Z')
        printf("Uppercase");
    return 0;
}
