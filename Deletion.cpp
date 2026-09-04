#include<iostream>
using namespace std;

void deletion(int arr[], int length, int index) {
    for (int i = index; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    length--;

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int length = 5; // actual number of elements = 5.
    deletion(arr, length, 2);
}
