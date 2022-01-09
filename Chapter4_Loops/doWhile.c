#include <stdio.h>

int main()
{
    int selection; // User input
    int goal = 13; // Gesuchte Größe
    int min = 1;
    int max = 20;           // Wertebereich des Spiels
    int num_iterations = 5; // Anzahl der Versuche
    int i = 0;              // Laufvariable für die Schleifenbedinung


    do
    {
        printf("Please enter your integer number between 1 to 20!\n");
        scanf("%d", &selection);

        if ((selection < min) || (selection > max))
        {
            printf("The entered number does not correspond to the value range!\n");
            printf("Remaining attempts: %d\n ", num_iterations - (i + 1));
        }
        else if (selection == goal)
        {
            printf("You have won the game!");
            break;
        }
        else
        {
            printf("Not correct. Please try again.\n");
            printf("Remaining attempts: %d\n", num_iterations - (i + 1));
        }
        i++;


    } while (i < num_iterations);


    return 0;
}
