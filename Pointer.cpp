#include<iostream>
using namespace std;

int main() {
    int x = 4;
    int *p = new int;

    *p = 10;
    delete p;
    // cout << x << endl;
    cout << *p << endl;
}
