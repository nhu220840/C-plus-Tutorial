#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> se;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int t; cin >> t;
    while(t--){
        int tt, x; cin >> tt >> x;
        if(tt == 1){
            se.insert(x);
        }
        else if(tt == 2){
            auto it = se.find(x);
            if(it != se.end()){
                se.erase(it);
            }
        }
        else if(tt == 3){
            auto it1 = se.lower_bound(x);
            if(it1 != se.end()){
                cout << *it1 << endl;
            }
            else
                cout << -1 << endl;
        }
        else if(tt == 4){
            auto it2 = se.upper_bound(x);
            if(it2 != se.begin()){
                it2--;
                cout << *it2 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
}