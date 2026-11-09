#include <iostream>

void print(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int* arr, int size) {
    for (int i = size - 1; i > (size - 1)/2; i--) 
    {
        
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    std::cout << "До reverse: ";
    print(arr, size);

    reverse(arr, size);

    std::cout << "После reverse: ";
    print(arr, size);

    return 0;
}
