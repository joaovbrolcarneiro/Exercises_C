#include <stdio.h>

void selection_sort_array_ascending(char* array)
{
    int i, j, min_idx;
    char temp;

    for (i = 0; array[i]; i++)
    {
        min_idx = i;

        for (j = i + 1; array[j]; j++)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            temp = array[min_idx];
            array[min_idx] = array[i];
            array[i] = temp;
        }
    }
}
/*
int main()
{
    char array[] = "dbac";

    printf("Original array: %s\n", array);

    selection_sort_array_ascending(array);

    printf("Sorted array: %s\n", array);

    return 0;
}*\
