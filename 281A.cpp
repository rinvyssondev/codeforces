#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (isupper(s[0])) {
        cout << s;
    } else {
        char q = toupper(s[0]);
        cout << q + s.substr(1) << endl;
    }
    return 0;
}