int binary_search(int* array, int item)
{
    int length = 0;
    int low = 0;
    int mid;
    int guess;

    while (array[length] != -1)
    {
        length++;
    }

    int high = length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        guess = array[mid];

        if (guess == item)
        {
            return mid;
        }
        else if (guess > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

