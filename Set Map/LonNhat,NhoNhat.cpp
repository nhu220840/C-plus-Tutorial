#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    multiset<int> se;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--){
        int tt; cin >> tt;
        if(tt == 1){
            int x; cin >> x;
            se.insert(x);
        }
        else if(tt == 2){
            int x; cin >> x;
            if(se.find(x) != se.end()){
                se.erase(x);
            }
        }
        else if(tt == 3){
            auto it = se.begin();
            cout << *it << endl;
        }
        else if(tt == 4){
            auto it2 = se.rbegin();
            cout << *it2 << endl;
        }
    }
}