#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll Tribo[65];

void generateTribo(){
    Tribo[1] = 1;
    Tribo[2] = 1;
    Tribo[3] = 2;
    for(int i = 4; i <= 60; i++){
        Tribo[i] = Tribo[i - 3] + Tribo[i - 2] + Tribo[i - 1];
    }
}

string Find(int n, ll k){
    if(n == 1) return "28tech";
    if(n == 2) return "C++";
    if(n == 3){
        if(k == 1) return "DSA";
        else return "JAVA";
    }

    if(k <= Tribo[n - 3])
        return Find(n - 3, k);
    else if(k <= Tribo[n - 2] + Tribo[n - 3])
        return Find(n - 2, k - Tribo[n - 3]);
    else
        return Find(n - 1, k - Tribo[n - 3] - Tribo[n - 2]);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    generateTribo();
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << Find(n, k) << endl;
    }
}