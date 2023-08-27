#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_set<int> s;
    int sum = 0;
    bool found = false;
    for(int i = 0; i < n; i++){
        sum += a[i];

        if(s.find(sum) != s.end() || sum == 0){
            found = true;
            break;
        }
        s.insert(sum);
    }
    if(found){
        cout << 1 << endl;
    } 
    else{
        cout << -1 << endl;
    }
}
