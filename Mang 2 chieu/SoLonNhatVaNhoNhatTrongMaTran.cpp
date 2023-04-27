#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int min_val = INT_MAX, max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            min_val = min(min_val, a[i][j]);
            max_val = max(max_val, a[i][j]);
        }
    }
    cout << min_val << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == min_val){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    cout << max_val << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == max_val){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}
