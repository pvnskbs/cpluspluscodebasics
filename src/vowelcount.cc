#include <iostream>
#include <string>

using namespace std;

int countVowels(string s){
    int vcount = 0;
    for (int i=0 ; i <s.length() ; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vcount++;

    return vcount;
}

int main() {

    string s = "FAAAAAAHHHHHHHHH......";
    cout << countVowels(s);
    return 0;
}
