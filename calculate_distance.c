#include <stdio.h>

int distanceCovered(int length1, int length2)
{

    int totalLength = length1 + length2;
    return totalLength;
}

int main()
{

    int result = distanceCovered(480, 960);
    printf("Total distance covered in kilometres is = %d\n", result);

    return (0);
}