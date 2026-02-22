#include <iostream>

using namespace std;

bool isprime (int n){
    if (n<=1)
    {
        return false;
    }
    if (n==2){return true;}
    if (n%2==0){return false;}
    
    for (int i = 3 ; i*i < n ; i+=2){
        if (n%i == 0) 
            return false;
    }
    return true;
}

int main() {
    // Write C++ code here
    isprime(13) ? cout << "Yes" : cout << "No";
    return 0;
}
