#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000005];
map<int,int> mp;
map<int,int> mp2;

bool cmp(int x, int y){
    if(mp[x] != mp[y]) 
        return mp[x] > mp[y];
    return x < y;
}

bool cmp2(int x, int y){
    if(mp[x] != mp[y]) 
        return mp[x] > mp[y];
    return mp2[x] < mp2[y];
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
        if(!mp2[a[i]]) mp2[a[i]] = i + 1;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    sort(a, a + n, cmp2);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}