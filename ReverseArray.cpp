#include <bits/stdc++.h>
using namespace std;

void reverseArray(char name[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;

    }
    int j = size - 1;
    // for (int i = 0; i < size / 2; i++) {
    //     char temp = name[i];
    //     name[i] = name[size - 1 - i];
    //     name[size - 1 - i] = temp;
    // }

    for (int i = 0; i < size; i++) {
        cout << name[i];
    }
}

int main() {
    char name[] = {'U', 'R', 'I', 'M', 'O'};
    int size = sizeof(name) / sizeof(name[0]);
    reverseArray(name, size);
    return 0;
}
