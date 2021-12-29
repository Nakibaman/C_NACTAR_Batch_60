#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kichu;
    printf("Enter a character:");
    scanf("%c",&kichu);

    if(kichu=='a')
        printf("The character is vowel");
    else if(kichu=='A')
        printf("The character is vowel");
    else if(kichu=='e')
        printf("The character is vowel");
    else if(kichu=='E')
        printf("The character is vowel");
    else if(kichu=='i')
        printf("The character is vowel");
    else if(kichu=='I')
        printf("The character is vowel");
    else if(kichu=='o')
        printf("The character is vowel");
    else if(kichu=='O')
        printf("The character is vowel");
    else if(kichu=='u')
        printf("The character is vowel");
    else if(kichu=='U')
        printf("The character is vowel");
    else if(kichu>='0'&&kichu<='9')
        printf("Not a letter");
    else
        printf("The character is consonent");
    return 0;
}
