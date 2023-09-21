#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Y tuong: tach tung giai thua cua cs cua xau x thanh tich cac giai thua
// 2! = 2!
// 3! = 3!
// 4! = 3! x 2! x 2!
// 5! = 5!
// 6! = 6 x 5! = 3! x 5!
// 7! = 7!
// 8! = 8 x 7! = 2! x 2! x 2! x 7!
// 9! = 9 x 8 x 7! = 2! x 3! x 3! x 7!

string processing(int n){
    if(n < 2) return "";
    if(n == 4) return "322";
    if(n == 6) return "53";
    if(n == 8) return "7222";
    if(n == 9) return "7332";
    return to_string(n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    string res = "";
    for(char c : s){
        res += processing(c - '0');
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res;
}