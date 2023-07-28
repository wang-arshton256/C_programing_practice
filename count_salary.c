#include <stdio.h>

int main()
{
    countSalary(580000, 250000);
    return (0);
}

void countSalary(int allowance, int monthlyPay)
{
    int sum = allowance + monthlyPay;
    printf("The sum of allowances %d + monthly pay of %d = %d\n", allowance, monthlyPay, sum);
}