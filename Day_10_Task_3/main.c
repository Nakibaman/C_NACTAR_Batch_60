#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter a mark");
    scanf("%d",&mark);
    if(mark>100||mark<0)
        printf("Invalid Mark");
    else if(mark>=80)
        printf("The grade letter is A+");
    else if(mark>=75)
        printf("The grade letter is A");
    else if(mark>=70)
        printf("The grade letter is A-");
    else if(mark>=65)
        printf("The grade letter is B+");
    else if(mark>=60)
        printf("The grade letter is B");
    else if(mark>=55)
        printf("The grade letter is B-");
    else if(mark>=50)
        printf("The grade letter is C+");
    else if(mark>=45)
        printf("The grade letter is C");
    else if(mark>=40)
        printf("The grade letter is D");
    else
        printf("The grade letter is F");
    return 0;
}
