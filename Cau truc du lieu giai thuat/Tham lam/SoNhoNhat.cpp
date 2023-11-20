#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Code moi:

string minimumNumber(int s, int d){
    if(d * 9 < s) return "-1";
    string res = string(d, '0');
    for(int i = d - 1; i >= 0; i--){
        if(s > 9){
            res[i] = '9';
            s -= 9;
        }
        else{
            if(i == 0) res[i] = s + '0';
            else{
                res[0] = '1';
                res[i] = (s - 1) + '0';
            }
            break;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S, D; cin >> S >> D;
    cout << minimumNumber(S, D);
}

//Code cu:

// string minimumNumber(int S, int D){
//     if(S < 10 && D < 10 && S == D){
//         return to_string(S);
//     }
//     S--;
//     string res = "";
//     int tmp = S / 9;
//     int r = S % 9;
//     for(int i = 1; i <= tmp; i++){
//         res += '9';
//     }
//     res += to_string(r);
//     if(res.length() < D){
//         res += string(D - res.size() - 1, '0');
//         res += '1';
//     }
//     else if(res.length() == D){
//         res[res.length() - 1]++;
//     }
//     else{
//         return "";
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int S, D; cin >> S >> D;
//     cout << (minimumNumber(S, D) == "" ? "-1" : minimumNumber(S, D));
