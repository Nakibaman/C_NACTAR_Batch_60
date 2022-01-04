#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5]={1,2,3};
    int i;
    int no_of_even,no_of_odd;
    no_of_even=0;
    no_of_odd=0;
    printf("The even numbers are : \n");
    printf("{");
    for(i=0;i<=2;i++)
    {
        if(numbers[i]%2==0)
        {
            printf("%d ",numbers[i]);
            no_of_even++;
        }

    }
    printf("}");

    printf("\nThe odd numbers are : \n");
    printf("{");
    for(i=0;i<=2;i++)
    {
        if(numbers[i]%2==1)
        {
            printf("%d ",numbers[i]);
            no_of_odd++;
        }

    }
    printf("}");
    printf("\nThere are %d even numbers and %d odd numbers",no_of_even,no_of_odd);
    return 0;
}
