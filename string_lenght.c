#include <stdio.h>
#include <string.h>

/*
 *string.h library is used when printing fuctions relating to string output, for example strlen function which is used to determine the length of a string.
 * %zu is the character specifier for printing the return value of strlen fuction.*/
int main()
{

    char name_of_business[] = "Tasha Hair Hub";

    printf("Your registered  business name is: %s\n", name_of_business);
    printf("The lenght of your business name is: %zu characters.\n", strlen(name_of_business));


    return (0);
}