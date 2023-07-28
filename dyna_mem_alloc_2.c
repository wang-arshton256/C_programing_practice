#include <stdio.h>
#include <stdlib.h>

int main()
{

    int wangMarks = 4;
    int *ptr;

    ptr = (int *)malloc(wangMarks * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory cannot be allocated");
        return (0);
    }

    printf("Enter input values:\n");
    for (int i = 0; i < wangMarks; ++i)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < wangMarks; ++i)
    {
        printf("Your marks are : %d\n", *(ptr + i));
    }

    ptr = realloc(ptr, wangMarks * sizeof(int));

    wangMarks = 6;

    printf("Newly Allocated Memory\n");
    for (int i = 0; i < wangMarks; ++i)
        ;
    {

        printf("%d\n", *(ptr + i));
    }

    free(ptr);

    return (0);
}