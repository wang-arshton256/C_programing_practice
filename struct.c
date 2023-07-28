#include <stdio.h>

struct Person
{
    double salary;
    int age;
};

int main()
{

    struct Person person1;

    person1.age = 45;
    person1.salary = 1800000;

    printf("Person 1 age is : %d", person1.age);
    printf("\nPerson 1 salary is : %2.lf", person1.salary);

    return (0);
}