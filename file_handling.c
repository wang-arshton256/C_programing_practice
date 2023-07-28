#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file.txt", "r");

    char content[1000];

    if (fptr != NULL)
    {
        fgets(content, 1000, fptr);
        printf("%s", content);
    }
    else
    {
        printf("File Open Unsuccessful");
    }
    return (0);
}