#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[1000001], final = 0;

void initialize(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void nextGen(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    int b[1000];
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    vector<vector<int>> res;
    while(!final){
        vector<int> tmp(a + 1, a + k + 1); //copy cac phan tu tu chi so 1 -> k sang vector tmp
        res.push_back(tmp);
        nextGen();
    }
    int cnt = 0;
    for(int i = res.size() - 1; i >= 0; i--){
        cnt++;
        bool check = true;
        for(int j = 0; j < k; j++){
            if(res[i][j] != b[j]){
                check = false;
                break;
            }
        }
        if(check == true){
            cout << cnt << endl;
            return 0;
        }
    }
}