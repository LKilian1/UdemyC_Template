#include <stdio.h>


int main()
{
    unsigned int num_iterations = 10u;

    for (unsigned int i = 0; i < num_iterations; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");

    for (unsigned int j = 0; j < num_iterations; j += 2)
    {
        printf("%d\n", j);
    }

    printf("\n");

    for (int u = 20; u > num_iterations; u -= 2)
    {
        printf("%d\n", u);
    }


    return 0;
}
