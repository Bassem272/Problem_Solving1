#include <iostream>

// Function to allocate memory for an array of integers
void allocateIntArray(int** arr, int size) {
    *arr = new int[size];  // Allocate memory for an array of integers
    for (int i = 0; i < size; ++i) {
        (*arr)[i] = i * 10;  // Initialize values in the array
    }
}

// Function to display the content of an array of integers
void displayIntArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to deallocate memory for an array of integers
void deallocateIntArray(int** arr) {
    delete[] *arr;  // Deallocate memory for the array
    *arr = nullptr;  // Set the pointer to null to avoid dangling pointer
}

int main() {
    int* arr1 = nullptr;  // Pointer to an integer (will be set to an array)
    int** arr2 = &arr1;   // Pointer to a pointer to an integer

    allocateIntArray(arr2, 5);  // Allocate memory for an array of 5 integers
    std::cout << "Array values: ";
    displayIntArray(arr1, 5);  // Display the values in the array

    deallocateIntArray(arr2);  // Deallocate memory for the array
    std::cout << "Array values after deallocation: ";
    displayIntArray(arr1, 5);  // Attempt to display values (undefined behavior)

    return 0;
}
