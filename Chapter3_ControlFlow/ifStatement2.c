#include <stdio.h>

int main()
{
    int age_Leo = 21;
    int age_Kerstin = 24;
    int age_Ulf = 48;


    // &&: Conjunction, logical AND operator
    // ||: Disjunction, logical OR operator
    // != Negation, logical NOT operator


    if ((age_Kerstin < age_Leo) && (age_Kerstin < age_Ulf))
    {
        printf("Kerstin is the youngest.");
    }
    else if ((age_Leo < age_Kerstin) && (age_Leo < age_Ulf))
    {
        printf("Leo is the youngest.");
    }
    else if ((age_Ulf < age_Kerstin) && (age_Ulf < age_Leo))
    {
        printf("Ulf is the youngest.");
    }
    else
    {
        printf("At least two persons have the same age.");
#
    }


    return 0;
}
