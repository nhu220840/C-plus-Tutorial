#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
int n, final = 0;
vector<ll> res;

void initialize(){
    s = string(n, '0');
}

void nextGen(){
    int i = n - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '0';
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
    n = 19; //tu kiem tra xem n = bao nhieu thi co the 
           //sinh het tat ca cac boi cua cac so tu 1 -> 300
    initialize();
    while(!final){
        res.push_back(stoll(s));
        nextGen();
    }
    res.erase(res.begin()); //xoa so 0 dau tien
    ll a[305]; //tao ra 1 mang de luu lai cac boi nho nhat cua cac test
    for(int i = 1; i <= 300; i++){
        for(ll x : res){
            if(x % i == 0){
                a[i] = x;
                break;
            }
        }
    }
    
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        cout << a[x] << endl;
    }
}