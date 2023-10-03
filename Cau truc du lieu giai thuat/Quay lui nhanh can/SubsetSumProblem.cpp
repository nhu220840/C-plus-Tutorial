#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[105], X[105];
int sum_arr = 0;
bool found = false;

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum_arr += a[i];
    }
}
void Try(int i, int start, int sum){
    for(int j = 1; j <= n; j++){
        X[i] = a[j];
        sum += a[j];

        if(sum == sum_arr / 2){
            cout << "1";
            found = true;
            exit(0);
        }
        else if(sum < sum_arr / 2){
            Try(i + 1, j + 1, sum);
        }

        sum -= a[j];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    if(sum_arr % 2 != 0){
        cout << "0";
        return 0;
    }   
    else{
        Try(1, 1, 0);
        if(!found) cout << "0";
    }
}