#include <stdio.h>

int sales(int expenses, int profits, int wages, int stock);
int main()
{

    int calculate = sales(78000, 250000, 45000, 780000);

    printf("%d\n", calculate);

    return (0);
}

int sales(int expenses, int profits, int wages, int stock)
{

    int result = stock - expenses + profits - wages;

    return result;
}