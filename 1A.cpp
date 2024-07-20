#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long weight = (a + c - 1) / c;
    long long height = (b + c - 1) / c;

    cout << weight * height << endl;
    return 0;
}