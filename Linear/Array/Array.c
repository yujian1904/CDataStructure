#include "Array.h"
#include <stdio.h>
void arrayDisplay(int *array, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d\n", *(array + i));
    }
}