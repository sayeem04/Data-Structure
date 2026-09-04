#include <bits/stdc++.h>
using namespace std;

void bubbleSort(char name[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (name[j] > name[j + 1]) {
                swap(name[j], name[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << name[i];
    }
    cout << endl;
}

int binarySearch(char name[], int size, char target) {
    bubbleSort(name, size);
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (name[mid] == target) {
            return mid;
        } else if (name[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    char name[] = "COMILLA"; // size kintu 5 hisheb korbe;
    int size = strlen(name);
    char target = 'I';
    int ans = binarySearch(name, size, target);
    cout << " 'I' is found on " << ans << " th index" << endl;
}
