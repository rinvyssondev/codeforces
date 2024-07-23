#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string s;
    cin >> s;
    vector<char> ch;

    for (char &c :s) {
        if (c != '+') {
            ch.push_back(c);       
        }
    }

    sort(ch.begin(), ch.end());

    for (size_t i = 0; i < ch.size(); ++i) {
        cout << ch[i];
        if (i < ch.size() - 1) {
            cout << '+';
        }
    }
    
    return 0;

}