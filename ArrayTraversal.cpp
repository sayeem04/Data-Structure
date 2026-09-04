#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {2, 4, 6, 8, 0, 14, 12, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size);
}
