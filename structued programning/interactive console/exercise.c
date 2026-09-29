#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    int number;

    do

    {

        printf("\n--- Simple Number Menu ---\n");

        printf("1. Check if number is even or odd\n");

        printf("2. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        if (choice == 1)

        {

            printf("Enter a number: ");

            scanf("%d", &number);

            if (number % 2 == 0)

            {

                printf("The number is even.\n");

            }

            else

            {

                printf("The number is odd.\n");

            }

        }

        else if (choice == 2)

        {

            printf("Program ended.\n");

        }

        else

        {

            printf("Invalid choice. Try again.\n");

        }

    } while (choice != 2);

    return 0;


}
