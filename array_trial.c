#include <stdio.h>

int main()
{
    int locationCodes[3];

    printf("Please enter the location codes for Wakiso district: \n");

    for (int l = 0; l < 3; ++l)
        scanf("%d", &locationCodes[l]);

    for (int l = 0; l < 3; ++l)
        printf("The location codes for Wakiso district are: %d\n", locationCodes[l]);

    return (0);
}