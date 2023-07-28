#include <stdio.h>

int main()
{

    char business_name[50];

    printf("please enter your preferred business name: ");

    fgets(business_name, (sizeof(business_name)), stdin);

    printf("%s", business_name);
    return (0);
}