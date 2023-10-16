#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
ll n;
vector<string> ans;

bool isPalin(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return (tmp == s && !s.empty());
}

void Try(ll i, string str){
    //can quay lui them 1 buoc de ktra xau cuoi cung
    if(i == n + 1){
        string tmp = "";
        for(string x : ans){
            tmp += x;
        }
        if(tmp.length() != s.length()) return;

        for(string x : ans){
            cout << x << " ";
        }
        cout << endl;

        return;
    }

    //Tai vi tri i co 2 cach di:
    //1. Neu xau hien tai la xau Palin thi bat dau mot xau moi
    //2. Tiep tuc xau hien tai

    // Bat dau xau moi
    if(isPalin(str)){
        ans.push_back(str);
        string n_str = ""; // tao xau moi
        Try(i + 1, n_str + (char)s[i]);
        ans.pop_back();
    }

    //Tiep tuc xau hien tai
    Try(i + 1, str + (char)s[i]);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    n = s.size();
    Try(0, "");
}