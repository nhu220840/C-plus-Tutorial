#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    long long sum = 0;
    map<long long, int> mp;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum == x){
            cnt++;
        }
        if(mp.find(sum - x) != mp.end()){
            cnt++;
        }
        mp[sum]++;
    }
    cout << cnt << endl;
}
