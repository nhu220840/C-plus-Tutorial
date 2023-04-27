#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int min = INT_MAX, max = INT_MIN;
    int min_pos, max_pos;
    for(int i = 0; i < n; i++){
        if(a[i] <= min){
            min = a[i];
            min_pos = i;
        }
        if(a[i] > max){
            max = a[i];
            max_pos = i;
        }
    }
    cout << min_pos << " " << max_pos;
}