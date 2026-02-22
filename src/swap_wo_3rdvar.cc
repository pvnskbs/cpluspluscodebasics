#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 10, b = 20;
    int *p = &a, *q = &b;    // pointer
    cout << "Before swap = " << *p << ", " << *q << endl;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    
    cout << "After swap = " << *p << ", " << *q << endl;

    return 0;
}
