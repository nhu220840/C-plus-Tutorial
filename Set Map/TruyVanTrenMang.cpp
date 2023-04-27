#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt, x; cin >> tt >> x;
        if(tt == 1){
            se.insert(x);
        }
        else if(tt == 2){
            auto it =se.find(x);
            if(it != se.end()){
                se.erase(it);
            }
        }
        else if(tt == 3){
            if(se.count(x) != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}