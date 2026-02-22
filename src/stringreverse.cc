#include <iostream>
#include <string>

using namespace std;

string reversestring(string s){
    string t = "";
    for (int i=s.length()-1 ; i>=0 ; i--)
        t = t + s[i];
    return t;
}

int main() {

    string s = "Hello World";
    cout << reversestring(s);
    return 0;
}
