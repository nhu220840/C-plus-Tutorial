#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int L[n], T[n];
    for(int i = 0; i < n; i++){
        cin >> L[i] >> T[i];
    }

    int totalLuck = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(T[i] == 0){
            totalLuck += L[i];
        }
        else{
            v.push_back(L[i]);
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    // int i = 0;
    // while(k--){
    //     totalLuck += v[i];
    //     i++;
    // }

    // if(i < v.size()) totalLuck -= v[i];

    //18 13 13 13 12 10 9 8

    for(int i = 0; i < v.size(); i++){
        if(k != 0){
            totalLuck += v[i];
            k--;
        }
        else{
            totalLuck -= v[i];
        }
    }
    cout << totalLuck;
}