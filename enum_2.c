#include <stdio.h>

enum Size
{
    small = 12,
    medium = 18,
    large = 32,
    extraLarge = 42,
};

int main()
{

    enum Size shoeSize1 = small;
    enum Size shoeSize2 = medium;
    enum Size shoeSize3 = extraLarge;

    printf("Your son's shoe size is : %d", shoeSize1);
    printf("\nYour Dad's shoe size is : %d", shoeSize2);
    printf("\nYour Grand fathers's shoe size is : %d", shoeSize3);

    return (0);
}