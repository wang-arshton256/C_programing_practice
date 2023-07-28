#include <stdio.h>

struct Employee
{
    double allowance;
    double salary;
    int age;
}
/* Whe can aslo declare the struct variables while defining the struct here */
employee1,
    employee2
    /* end */
    ;

int main()
{
    /*struct Employee employee1 =
        {
            .age = 32, .allowance = 750000, .salary = 2500000};
    struct Employee employee2 =
        {
            .age = 24, .allowance = 850000, .salary = 3500000};
            */

    employee1.age = 78;
    employee1.allowance = 35000;
    employee1.salary = 89000;

    printf("Employee 1 age is : %d", employee1.age);
    printf("\nEmployee 1 allowance is : % 2.lf", employee1.allowance);
    printf("\nEmployee 1 salary is : % 2.lf", employee1.salary);

    printf("\n\n--------------------------------------------------------");

    employee2.age = 54;
    employee2.allowance = 79000;
    employee2.salary = 125000;

    printf("\n\nEmployee 2 age is : %d", employee2.age);
    printf("\nEmployee 2 allowance is : %2.lf", employee2.allowance);
    printf("\nEmployee 2 salary is : %2.lf", employee2.salary);
    return (0);
}