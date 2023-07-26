#include <stdio.h>

int main()
{

    int age[7] = {14, 98, 22, 5, 7, 9, 12};

    *age = 37;

    for (int i = 0; i < 7; ++i)
    {
        printf("%d = %p\n", *(age + i), age + i);
    }

    return (0);
}