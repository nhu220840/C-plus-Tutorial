#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, X[100];
bool found = false;

void Try(int i, int start, int sum){
    for(int j = start; j <= 9; j++){
        X[i] = j;
        sum += j;
        if(sum == n && i == k){
            found = true;
            for(int idx = 1; idx <= i; idx++){
                cout << X[idx];
                if(idx != i) cout << " + ";
                else cout << endl;
            }
        }
        else if(sum < n && i < k){
            Try(i + 1, j + 1, sum);
        }

        sum -= j;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1, 1, 0);
    if(!found) cout << "NOT FOUND";
}