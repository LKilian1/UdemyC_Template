// Rectangle Example
// 1.) Read the valus for a, b from the user
// 2.) Compute the perimeter and area of the rectangle
// 3.) Print the computed values to the console

#include <stdio.h>


int main()
{
    float a, b;

    printf("Please enter a value for variable a: ");
    scanf("%f", &a);

    printf("Please enter a value for variable ab: ");
    scanf("%f", &b);

    float perimeter = 2 * a + 2 * b;
    float area = a * b;

    printf("area: %f an the perimeter: %f\n", area, perimeter);


    return 0;
}
