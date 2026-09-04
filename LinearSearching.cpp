#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int size, int target) {
    int flags = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            flags = 1;
            break;
        }
    }
    if (flags == 1) {
        cout << "TARGET IS FOUND" << endl;
    } else {
        cout << "TARGET IS NOT FOUND" << endl;
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 9, 55, 44, 55, 54, 32, 46};
    int target = 10;
    linearSearch(arr, 5, target);
}
