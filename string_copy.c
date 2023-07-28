#include <stdio.h>
#include <string.h>

int main()
{

    char my_name[] = "Wangutusi Arshton";
    char new_name[strlen(my_name)];

    strcpy(new_name, my_name);

    printf("Your new name is: %s\n", new_name);

    return (0);
}