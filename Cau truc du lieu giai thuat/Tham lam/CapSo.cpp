#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(n % 2 == 1){
        cout << "NO";
        return 0;
    }
    else{
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        sort(a, a + n);

        if(odd % 2 == 1 && even % 2 == 1){
            for(int i = 1; i < n; i++){
                if(abs(a[i] - a[i - 1]) == 1){
                    cout << "YES";
                    return 0;
                }
            }
            cout << "NO";
            return 0;
        }
        else{
            cout << "YES";
            return 0;
        }
    }
}