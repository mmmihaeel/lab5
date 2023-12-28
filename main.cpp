#include <iostream>

using namespace std;

// Функція для виведення масиву на екран
void printArray(const int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 14;
    int array[size] = {2, -5, 7, -10, 15, -3, 8, 4, -1, 9, 12, 6, 18, 20};

    cout << "Initialized array: ";
    printArray(array, size);


    return 0;
}