#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 4; // automatically allocated in stack memory.

    int *p = new int; /* dynamically allocated in heap memory. new int lekhar maddhome ami computer ke bolchi je - amk
                        heap memory te ekta purno sonkkha rakhar moto ekta khali jayga dao. Computer se jaygayr THikana
                        ekti pointer p er hate dey. Erpr ami *p = 10; likhe oi faka jaygay 10 boshalam. Sob Sheshe
                        delete p diye ami computer ke bolechi - amar kaj shesh! ei memory khali kore dao.
                        */
    *p = 10;

    delete p;
    cout << *p << endl;
    return 0;
}
