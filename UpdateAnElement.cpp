#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int count = 1;
    int i = 0; //intialization
    while (arr[i] != 50) // condition
    {
        count++;
        i++; // incrementation
    }
    int size = count;
    arr[4] = 500;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
}
