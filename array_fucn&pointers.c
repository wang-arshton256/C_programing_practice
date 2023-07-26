#include <stdio.h>

int main()
{
    
    int arr[] = {34,
                 12,
                 21,
                 54,
                 48};

    int largest = *arr;

    for (i = 0; i < 5; ++i)
    {
        printf(" largest < *(arr + i)");
    }

    return (0);
}