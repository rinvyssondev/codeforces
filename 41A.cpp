#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    
    if (s1 != s2) {
        cout << "NO" << endl;
    
    } else {
        cout << "YES" << endl;
    }

    return 0;

}