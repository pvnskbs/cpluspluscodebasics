#include <iostream>

void fibonacci (int n){
    int a = 0, b=1;
    std::cout << a << "," ;
    while(b<n) {
        std::cout << b << ",";
        b=a+b;
        a=b-a;
    }
    std::cout << std::endl;
}

int main() {
    fibonacci(10);
    return 0;
}
