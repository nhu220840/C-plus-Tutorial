#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Tu tuong: sinh cac xau nhi phan co do dai tu 1 -> 15
//          sau do lat nguoc xau roi ghep voi xau cu se duoc 1 xau nhi phan doi xung chan
//VD: 110 -> lat thanh 011 -> ghep vao xau ban dau 110011

int n, final;
string s;
vector<string> res;

void initialize(){
    s = string(n, '0');
}

void nextGen(){
    int i = n - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1)
        final = 1;
    else{
        s[i] = '1';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 1; i <= 15; i++){
        n = i;
        final = 0;
        initialize();
        while(final == 0){
            string t = s;
            reverse(t.begin(), t.end());
            string tmp = s + t;
            res.push_back(tmp);
            nextGen();
        }
    }

    int m; cin >> m;
    sort(res.begin(), res.end());
    for(string x : res){
        if(x.length() <= m){
            cout << x << endl;
        }
    }
}