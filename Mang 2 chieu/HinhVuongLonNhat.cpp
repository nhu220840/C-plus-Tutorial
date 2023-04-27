#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int n;
int a[105][105];

int sumofSquare(int i, int j){
    int sum = a[i][j];
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        sum += a[i1][j1];
    }
    return sum;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != 0 && i != n - 1 && j != 0 && j != n - 1)
                max_val = max(max_val, sumofSquare(i, j));
        }
    }
    cout << max_val;
}