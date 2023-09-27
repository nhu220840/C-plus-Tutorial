#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000], cnt, final = 0;

void initialize(){
    cnt = 1;
    a[1] = n;
}

void nextGen(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        for(int j = 1; j <= q; j++){
            cnt++;
            a[cnt] = a[i];
        }
        if(r != 0){
            cnt++;
            a[cnt] = r;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    vector<string> v;
    int num = 0;
    while(!final){
        num++;
        string tmp = "";
        for(int i = 1; i <= cnt; i++){
            tmp += to_string(a[i]);
            if(i != cnt) tmp += "+";
        }
        v.push_back(tmp);
        nextGen();
    }
    cout << num << endl;
    for(string s : v) cout << s << endl;
}