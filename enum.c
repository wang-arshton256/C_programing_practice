#include <stdio.h>

enum Size
{
    small,
    medium,
    large,
    extraLarge,
};

int main()
{
    enum Size shoeSize;
    shoeSize = large;
    printf("Your shoe size is : %d", shoeSize);

    return (0);
}