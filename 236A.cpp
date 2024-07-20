#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> d;
    cout << d;

    for(char c : s) {
        d.insert(c);
    }

    if (d.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}