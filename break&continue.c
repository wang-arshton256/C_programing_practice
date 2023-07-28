#include <stdio.h>

int main()
{
    int wang;
    for (wang = 28; wang <= 35; wang++)
    {
        if (wang == 32)
        {
            break;
        }
        printf("%d\n", wang);
    }
}