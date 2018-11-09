#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please enter your number: ");
    scanf("%d",&number);

    int modulus = number%2;
    if(modulus==0)
    {
        printf("\nThe number is even\n");
    }
    else
    {
     printf("\nThe number is odd\n");
    }
    return 0;
}
