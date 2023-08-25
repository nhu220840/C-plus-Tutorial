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
            if(se.find(x) != se.end()){
                auto it = se.find(x);
                se.erase(it);
            }
        }
        else if(tt == 3){
            auto it = se.lower_bound(x);
            if(it == se.end())
                cout << -1 << endl;
            else
                cout << *it << endl;
        }
        else{
            auto it = se.upper_bound(x);
            if(it == se.begin())
                cout << -1 << endl;
            else{
                it--;
                cout << *it << endl;
            }
        }
    }
}