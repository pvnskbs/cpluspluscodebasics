#include <iostream>

using namespace std;

int main() {

    int a = 10, b = 20;
    int *p = &a, *q = &b;    // pointer
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    
    cout << *p << ", " << *q << endl;

    return 0;
}
