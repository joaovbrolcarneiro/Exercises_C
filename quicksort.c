#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return i + 1;
}

void quicksort(int* array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        
        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}
/*
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    quicksort(arr, 0, length - 1);
    
    printf("Sorted array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
*/
