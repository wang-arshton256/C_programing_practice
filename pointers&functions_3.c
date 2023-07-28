#include <stdio.h>

int *addSalary(int *wage, int *allowance, int *sum)
{

    *sum = *wage + *allowance;
    return sum;
}

int main()
{

    int wageAmount = 75000;
    int allowanceAmount = 1200000;
    int sum;

    int *result = addSalary(&wageAmount, &allowanceAmount, &sum);

    printf("The total monthly salary is %d", *result);
    return (0);
}