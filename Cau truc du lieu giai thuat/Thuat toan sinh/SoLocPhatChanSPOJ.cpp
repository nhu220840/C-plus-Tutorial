#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, final;
string s;
vector<string> res;

void initialize(){
    s = string(n, '6');
}

void nextGen(){
    int i = n - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1)
        final = 1;
    else{
        s[i] = '8';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 1; i <= 9; i++){
        n = i;
        final = 0;
        initialize();
        while(!final){
            string t = s;
            reverse(t.begin(), t.end());
            string tmp = s + t;
            res.push_back(tmp);
            nextGen();
        }
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        cout << res[i] << " ";
    }
}