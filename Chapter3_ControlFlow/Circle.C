// CIRCLE EXAMPLE
// 1.) READ THE VALUES FPR A AND B FORM THE USER AND CHECK IF THE INPIT IS CORRECT (NON-NEGATIVE NUMBERS)
// 2.) COMPUTE THE ARE AND THE PERIMETER OF THE CIRCLE
// 3.) PRINT THE COMPUTED VALUES IN ZHE CONSOLE

#include <stdio.h>

#define PI 3.14159F

int main()
{
    float r;

    printf("Please enter a integer number for the radius: ");
    scanf("%d", &r);

    if (r < 0.0)
    {
        printf("You entered a non-valid number, please restart the program!");
    }
    else
    {
        float area = r * r * PI;
        float perimeter = 2.0f * PI * r;

        printf("The perimeter is: %f and the area is: %f\n", perimeter, area);
    }


    return 0;
}
