#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        int num;
        stringstream ss(s);
        while(ss >> num){
            if(num > i){
                cout << i << " " << num << endl;
            }
        }
    }
}