#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    b = a;
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++){
        //Ktra xem mang ban dau doi xung voi mang da sap xep qua phan tu o giua hay ko?
        if(a[i] != b[n - i - 1] && a[i] != b[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}