#include <stdio.h>
#include <time.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key; 
	printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    clock_t start_time = clock();
    int index = linearSearch(arr, n, key);
    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    if (index != -1) {
        printf("Key found at index %d\n", index);
    } else {
        printf("Key not found in the array\n");
    }

    printf("Time taken: %f seconds\n", elapsed_time);

    return 0;
}
