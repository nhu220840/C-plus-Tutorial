#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

typedef pair<int, int> ii;

bool cmp(ii a, ii b){
    if(a.se== b.se)
        return a.fi> b.first;
    return a.se < b.se;
}

int main(){
    int n; cin >> n;
    ii a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].fi >> a[i].se;
    }
    sort(a, a + n, cmp);
    for(ii x : a) cout << x.fi << " " << x.se << endl;
}