#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, final = 0; 
vector<string> v;

void nextGen(){
    int i = n - 2;
    while(i >= 0 && v[i] > v[i + 1]){
        i--;
    }
    if(i == -1){
        final = 1;
    }
    else{
        int j = n - 1;
        while(v[i] > v[j]){
            j--;
        }
        swap(v[i], v[j]);
        reverse(v.begin() + i + 1, v.end());
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
        string name; cin >> name;
        v.push_back(name);
    }
    sort(v.begin(), v.end());
    while(final == 0){
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        nextGen();
    }
}