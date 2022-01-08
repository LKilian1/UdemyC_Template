#include <stdio.h>


int main()
{
    int cola = 0;
    int icetea = 1;
    int water = 2;
    int coffee = 3;

    int selection;

    printf("Pleaase enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case 0:
    {
        printf("You chosed cola!");
        break;
    }
    case 1:
    {
        printf("You chosed icetea!");
        break;
    }
    case 2:
    {
        printf("You chosed water!");
        break;
    }
    case 3:
    {
        printf("You chosed coffee!");
        break;
    }
    default:
    {
        printf("You entered a not valid drink!");
    }
    }


    return 0;
}
