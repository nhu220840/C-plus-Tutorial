#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> se;
    for(int i = 0; i < n; i++){
        se.insert(a[i]);
    }
    for(int i = 0; i < n; i++){
        se.erase(a[i]);
        auto it = se.lower_bound(a[i]);
        if(it != se.begin()){
            it--;
            cout << *it << " ";
        }
        else{
            cout << "# ";
        }
        se.insert(a[i]);
    }
}