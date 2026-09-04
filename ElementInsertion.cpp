#include<iostream>
using namespace std;

void insertElements(int arr[], int length, int index, int value) {
    // shifting elements one positon to the right.
    for (int i = length; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    length++;

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int length = 5; // actual number of elements = 5.
    insertElements(arr, length, 2, 25);
}
