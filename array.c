#include <stdio.h>

int main()
{

    /**
     * When declaring an array, the order is datatype, arrayName, [arraySize]
     */
    int salary[5] = {175000, 154000, 25000, 32000, 5400, 54800};

    printf("The first salary grade is %d shillings\n", salary[0]);
    printf("The second salary grade is %d shillings\n", salary[1]);
    printf("The third salary grade is %d shillings\n", salary[2]);
    printf("The fourth salary grade is %d shillings\n", salary[3]);
    printf("The fifth salary grade is %d shillings\n", salary[4]);
    printf("The sixth salary grade is %d shillings\n", salary[5]);

    return (0);
}