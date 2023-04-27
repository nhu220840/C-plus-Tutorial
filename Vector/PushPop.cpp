#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        if(k == 2){
            if(v.size() != 0)
                v.erase(v.end() - 1);
        }
        else{
            int x; cin >> x;
            v.push_back(x);
        }
    }
    if(v.size() == 0)
        cout << "EMPTY";
    else{
        for(int x : v){
            cout << x << " ";
        }
    }
}