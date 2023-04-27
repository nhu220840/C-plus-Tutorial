#include <bits/stdc++.h>

using namespace std;

int X;

bool cmp(int x, int y){
    if(abs(x - X) == abs(y - X))
        return x < y;
    else
        return abs(x - X) < abs(y - X);
}

bool cmp2(int x, int y){
    if(x % 2 == 0 && y % 2 == 0)
        return x < y;
    if(x % 2 != 0 && y % 2 != 0)
        return x > y;
    return x % 2 == 0;
}

int main(){
    int n; cin >> n >> X;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    sort(a, a + n, cmp2);
    for(int x : a) cout << x << " ";
}