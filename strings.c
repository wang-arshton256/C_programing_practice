#include <stdio.h>

int main()
{

    char str[25];

    printf("Please enter you name: ");

    /*
    *
    *fgets is the fuction used to enter character from more than one word. 
    *The first parameter is str is the name of the string.
    *The second parameter is sizeof which is the size of the string. It is very important to enter a required amount of size to avoid high memory consumption when the program usage increases beyond the expect numbers.
    *stdin represents the standard input which denoted that we are taking input form the input.
    * */
    fgets(str, sizeof(str), stdin);

    printf("%s\n", str);

    return (0);
}