#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//TSP: Travelling Salesman Problem

int n, fee[100][100], X[100], ans = INT_MAX, sum = 0, fee_min = INT_MAX;
int visited[100];

//X[i] = j: thanh pho o luot thu i ma ban di qua co stt la j

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> fee[i][j];
            if(fee[i][j] != 0){
                fee_min = min(fee_min, fee[i][j]);
            }
        }
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(visited[j] == 0){
            X[i] = j;
            visited[j] = 1;
            sum += fee[X[i - 1]][X[i]]; //chi phi duong di = tong chi phi cua khi di tu thanh pho truoc + chi phi khi di den thanh pho tiep theo 

            if(i == n){
                ans = min(ans, sum + fee[X[i]][1]); //cong them 1 luong khi di tu thanh pho cuoi cung ve thanh pho dau tien
            }
            //Danh gia can: Branch and Bound
            else if(sum + (n - i + 1) * fee_min < ans){
                Try(i + 1);
            }

            visited[j] = 0;
            sum -= fee[X[i - 1]][X[i]];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    X[1] = 1; visited[1] = 1;
    Try(2);
    cout << ans;
}