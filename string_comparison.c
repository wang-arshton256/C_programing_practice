/*
 *
 *A program that enters two strings from a user and compares the length of both details using strlen fuction prints the string with the larger length.
 *
 *
 */
#include <stdio.h>
#include <string.h>

int main()
{

    char name[25];
    char address[50];

    printf("Please enter your name and address: \n");
    fgets(name, sizeof(name), stdin);
    fgets(address, sizeof(address), stdin);

    printf("The lenght of your  name is: %zu characters.\n", strlen(name));
    printf("The lenght of your  address is: %zu characters.\n", strlen(address));

       return (0);
}