#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("you are a minor.\n");
    }
    return 0;
}
