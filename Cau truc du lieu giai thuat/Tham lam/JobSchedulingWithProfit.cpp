#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Job{
    int id, deadline, profit;
};

bool cmp(Job a, Job b){
    if(a.profit != b.profit)
        return a.profit > b.profit;
    return a.deadline > b.deadline;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    Job a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    }
    sort(a, a + n, cmp);
    ll ans = 0;
    int used[n] = {0};
    for(int i = 0; i < n; i++){
        for(int j = a[i].deadline - 1; j >= 0; j--){
            if(used[j] == 0){
                ans += a[i].profit;
                used[j] = 1;
                break;
            }
        }
    }
    cout << ans;
}