#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Enter a character:");
    scanf("%c",&input);
    if(input=='a'||input=='A'||input='e'||input='E'||input=='i'||input=='I'||input='o'||input=='O'||input=='u'||input=='U')
        printf("The character is vowel");
    else
        printf("The character is consonent");
    return 0;
}
