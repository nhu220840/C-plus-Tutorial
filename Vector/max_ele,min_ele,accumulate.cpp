#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << *min_element(v.begin(), v.end()) << endl << *max_element(v.begin(), v.end()) << endl << accumulate(v.begin(), v.end(), 0);
}