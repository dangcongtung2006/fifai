#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inputData(int* ptr, int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        *(ptr + i) = rand() % 100;
    }
}

void printData(int* ptr, int size) {
    cout << "Mang so nguyen da nhap: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Nhap kich thuoc mang: ";
    cin >> size;

    int* arr = new int[size];

    inputData(arr, size);
    printData(arr, size);

    delete[] arr;
    return 0;
}
