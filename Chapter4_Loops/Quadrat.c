/*  Quadrat: Seitenlänge a vom User einlesen.
1.) Überprüfe dabei, ob der User eine gültige Zahl eingegebn hat.
    Wenn nicht, gib dem User solange die Chance bis seine Eingabe valide ist.
2.) Berechne den Umfang und den Flächeninhalt des Quadrats.
3.) gebe diese Werte in der Konsole aus. */


#include <stdio.h>

int main()
{
    int is_valid_number = 0;
    float user_input;

    while (is_valid_number == 0)
    {
        printf("Please enter a value for the input!\n");
        scanf("%f", &user_input);

        if (user_input > 0.0)
        {
            is_valid_number = 1;
        }
        else
        {
            printf("You entered number is not valid!\n");
        }
    }

    float perimeter = 4 * user_input;
    float area = user_input * user_input;

    printf("Area: %f, Perimeter: %f", area, perimeter);


    return 0;
}
