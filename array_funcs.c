#include <stdio.h>

int main()
{

    int ages[6] = {5, 9, 1, 7, 8, 9};

    /*You can aslo change the array element by assigning it a different value*/
    ages[1, 0] = 17;
    /*You can also change the array element using pointers*/

    *ages = 18;
    *(ages + 4) = 25;

    /*end changing array elements*/

    for (int i = 0; i < 6; ++i)
    {
        printf("%d = %p\n", *(ages + i), (ages + i));
    };

    return (0);
}