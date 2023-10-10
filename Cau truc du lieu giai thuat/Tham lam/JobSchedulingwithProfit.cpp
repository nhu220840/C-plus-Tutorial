#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct job{
    int id, deadline, profit;
};

bool cmp(job a, job b){
    return a.profit > b.profit;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    job a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    }
    sort(a, a + n, cmp);
    
}