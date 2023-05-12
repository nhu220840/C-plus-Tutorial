#include <iostream>
#include <string>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    while (Q--) {
        string a, b;
        cin >> a >> b;
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j] || toupper(a[i]) == b[j]) {
                j++;
            }
            i++;
        }
        if (j == b.size()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}