#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character_1,character_2;
    int no_of_characters;
    printf("Enter a character:");
    scanf("%c",&character_1);
    scanf("%c");
    printf("Enter another character");
    scanf("%c",&character_2);
    no_of_characters=character_1-character_2-1;
    printf("There are %d characters between",no_of_characters);
    return 0;
}
