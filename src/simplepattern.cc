#include <iostream>

void print (int n){
    if (n==0)
    {
        return;
    }
    std::cout << "*";
    print(n-1);
    
}

void pattern (int n){
    if (n==0)
    {
        return;
    }
    pattern(n-1);
    print(n);
    std::cout << std::endl;
}


int main() {
    pattern(5);
    return 0;
}
