#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void processingMin(string &x){
    for(char &c : x){
        if(c == '6') c = '5';
    }
}

void processingMax(string &x){
    for(char &c : x){
        if(c == '5') c = '6';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b; cin >> a >> b;
    processingMin(a);
    processingMin(b);
    ll numA_min = stoll(a), numB_min = stoll(b);
    processingMax(a);
    processingMax(b);
    ll numA_max = stoll(a), numB_max = stoll(b);
    cout << numA_max + numB_max << " " << numA_min + numB_min;
}