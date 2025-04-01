#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n = 10;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = rand() % 100;
    for (int i = 0; i < n; ++i) cout << arr[i] << " "; cout << endl;
    int j = 0;
    for (int i = 0; i < n; ++i) if (arr[i] % 2 == 0) arr[j++] = arr[i];
    for (int i = 0; i < j; ++i) cout << arr[i] << " "; cout << endl;
    delete[] arr;
    return 0;
    // tùng ngu 
}