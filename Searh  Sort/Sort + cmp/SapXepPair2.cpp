#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

typedef pair<int, int> ii;

bool cmp(ii a, ii b){
    if(abs(a.fi - a.se) != abs(b.fi - b.se))
        return abs(a.fi - a.se) < abs(b.fi - b.se);
    else{
        if(a.fi != b.fi)
            return a.fi < b.fi;
        else
            return a.se > b.se;
    }
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