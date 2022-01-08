#include <stdio.h>


enum Drink
{
    DRINK_COLA = 0,
    DRINK_ICETEA = 1,
    DRINK_WATER = 2,
    DRINK_COFFEE = 3,
};

enum Caffeine
{
    CAFFEINE_COFFEE = 0,
    CAFFEINE_ENERGY = 1,
};


int main()
{

    int selection;

    printf("Pleaase enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case DRINK_COLA:
    {
        printf("You chosed cola!");
        break;
    }
    case DRINK_ICETEA:
    {
        printf("You chosed icetea!");
        break;
    }
    case DRINK_WATER:
    {
        printf("You chosed water!");
        break;
    }
    case DRINK_COFFEE:
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
