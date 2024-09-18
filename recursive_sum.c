#include <stdio.h>

int recursive_sum(int* array, int length) {
    if (length == 0) {
        return 0;
    }
    return array[0] + recursive_sum(array + 1, length - 1);
}

/*int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = recursive_sum(arr, length);
    printf("Sum: %d\n", sum);
    return 0;
}*/
