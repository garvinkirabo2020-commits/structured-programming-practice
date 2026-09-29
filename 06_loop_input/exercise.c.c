#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int number;
    int total=0;
    for(i=1;i<=5; i++)
    {
        printf("enter number %d:", i);
        scanf("%d\n", &number);
        total=total + number;
    }
    printf("the total is;%d\n",total);
    return 0;
}
