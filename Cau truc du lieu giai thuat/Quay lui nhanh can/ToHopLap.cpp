#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k;
string s;
char tmp[100];

void enter(){
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
}

void print(){
    for(int i = 1; i <= k; i++){
        cout << tmp[i];
    }
    cout << endl;
}

void Try(int i, int start){
    for(int j = start; j < n; j++){
        tmp[i] = s[j];

        if(i == k){
            print();
        }
        else if(i < k){
            Try(i + 1, j);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 0);
}