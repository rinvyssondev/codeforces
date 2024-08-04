#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    int count = 1;

    for (unsigned int i = 1; i < s.length(); i++) {
        // [0,1,1,0,0] => 0 != 1 => count=1 // 1 == 1 count++
        if (s[i] == s[i - 1]){
            count++;
            if (count == 7) {
                cout << "YES" << endl; 
                return 0;
            }
        } else {
            count = 1; 
        }
    }
    cout << "NO" << endl;

    return 0;
}