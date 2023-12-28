#include <iostream>
#include <climits>

using namespace std;

// Функція для пошуку максимального від'ємного значення в масиві
int findMaxNegative(const int numbers[], int size) {
    int max_negative = INT_MIN;
    bool found_negative = false;

    for (int i = 0; i < size; ++i) {
        if (numbers[i] < 0) {
            found_negative = true;
            if (numbers[i] > max_negative) {
                max_negative = numbers[i];
            }
        }
    }

    if (found_negative) {
        return max_negative;
    } else {
        // Якщо немає від'ємних значень, повертаємо спеціальне значення
        return -1;
    }
}

// Функція для знаходження максимального елемента в масиві
int findMaxElement(const int* array, int size) {
    int maxElement = array[0];  // Початкове значення
    for (int i = 1; i < size; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

// Функція для заміни від'ємних елементів згідно з умовами задачі
void replaceNegativeElements(int* array, int size) {
    int maxElement = findMaxElement(array, size);
    int maxNegative = findMaxNegative(array, size); 

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 && array[i] < 0) {
            array[i] = maxElement;
        } else if (i % 2 != 0 && array[i] < 0) {
            array[i] = maxNegative;
        }
    }
}

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

    replaceNegativeElements(array, size);

    cout << "\nModified array: ";
    printArray(array, size);

    return 0;
}