#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int pos[1000005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        pos[x] = i;
    }
    int round = 1;
    for(int i = 2; i <= n; i++){
        if(pos[i] < pos[i - 1]){
            round++;
        }
    }
    cout << round;
}