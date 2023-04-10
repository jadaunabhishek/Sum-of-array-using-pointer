// C program to calculate the sum of array elements using pointers
#include <stdio.h>

int main() {

    int size;
    int *ptr, sum = 0;

    printf("Enter the size of the array : \n");
    
    // Input of array size
    scanf("%d", &size);
    
    int arr[size];

    // Input of array elements
    printf("Enter array elements : \n");
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    // Set address of first array element to *ptr
    ptr = arr;

    for (int i = 0; i < size; i++) {
        sum = sum + *ptr;
        ptr++; // Increment pointer by one to get next element
    }

    // Printing the sum of elements
    printf("The sum of array elements is: %d\n", sum);

    return 0;

}
