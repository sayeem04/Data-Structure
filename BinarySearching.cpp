#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = end + (start - end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 222222;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, size, target);
    if (ans != -1) {
        cout << "Target is found on " << ans << " th index.";
    } else {
        cout << "Target is not found.";
    }
}
