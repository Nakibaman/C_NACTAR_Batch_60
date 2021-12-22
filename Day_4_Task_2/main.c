#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_1,number_2;
    int number_3,result;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&number_1,&number_2,&number_3);
    result=number_1*number_2*number_3;
    printf("The multiplied result is %d",result);
    return 0;
}
