#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number;
    for (i=1; i<=5; i++)
    {
        printf("enter number %d:", i);
        scanf("%d", &number);
        if (number %2 ==0)
        {
            printf("the number is even.\n");
        }
        else
        {
            printf("the number is odd.\n");
        }
    }
    return 0;
}
