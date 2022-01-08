#include <stdio.h>


enum Drink
{
    COLA = 0,
    ICETEA = 1,
    WATER = 2,
    COFFEE = 3,
};


int main()
{

    int selection;

    printf("Pleaase enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case COLA:
    {
        printf("You chosed cola!");
        break;
    }
    case ICETEA:
    {
        printf("You chosed icetea!");
        break;
    }
    case WATER:
    {
        printf("You chosed water!");
        break;
    }
    case COFFEE:
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
