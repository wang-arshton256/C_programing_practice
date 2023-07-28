#include <stdio.h>
#include <string.h>

int main()
{

    char address[] = "I live at kirinya kikonko next to Kesh Motel";

    printf("Where do you live? \n\n");
    printf("%s\n", address);

    printf("The lenght of your address is: %zu characters.", strlen(address));

    return (0);
}