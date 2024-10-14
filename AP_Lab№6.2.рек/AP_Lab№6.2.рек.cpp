#include <iostream>
#include <time.h>
#include <cstdlib>
#include <climits>
using namespace std;

void generateArray(int a[], int size, int index = 0) {
    if (index == size) return;
    a[index] = rand() % 46 - 10;
    generateArray(a, size, index + 1);
}

void printArray(const int a[], int size, int index = 0) {
    if (index == size) {
        cout << endl;
        return;
    }
    cout << a[index] << " ";
    printArray(a, size, index + 1);
}

int findElement(const int a[], const int size, int index = 0, int smallest = 36, int indexMin = -1) {
    if (index == size) return indexMin;

    if (a[index] <= smallest && a[index] % 2 == 0) {
        smallest = a[index];
        indexMin = index;
    }

    return findElement(a, size, index + 1, smallest, indexMin);
}

void replaceElements(int a[], int indexMin) {
    if (indexMin != -1) {
        a[indexMin] = 0;
    }
}

int main() {
    const int SIZE = 22;
    srand((unsigned)time(NULL));
    int a[SIZE];
    generateArray(a, SIZE);
    printArray(a, SIZE);
    int indexMin = findElement(a, SIZE);
    if (indexMin != -1) {
        cout << "Smallest element index: " << indexMin << endl;
        replaceElements(a, indexMin);
        printArray(a, SIZE);
    }
    else {
        cout << "No even elements found" << endl;
    }
    
    return 0;
}