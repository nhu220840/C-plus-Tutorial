#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[105], X[105];

void enter(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
}

//X[i]: a[pos], pos + 1, pos + 2,..., n - 1

// void Try(int i, int pos, int sum){
//     for(int j = pos; j < n; j++){
//         X[i] = a[j];
//         sum += X[i];
//         if(sum == k){
//             cout << "[";
//             for(int l = 1; l <= i; l++){
//                 cout << X[l];
//                 if(l != i) cout << " ";
//                 else cout << "]" << endl;
//             }
//         }
//         else if(sum < k){
//             Try(i + 1, j + 1, sum);
//         }

//         sum -= X[i];
//     }
// }

vector<int> v;

void Try(int pos, int sum){
    for(int j = pos; j < n; j++){
        v.push_back(a[j]);
        sum += a[j];
        if(sum == k){
            cout << "[";
            for(int l = 0; l < v.size(); l++){
                cout << v[l];
                if(l != v.size() - 1) cout << " ";
                else cout << "]" << endl;
            }
        }
        else if(sum < k){
            Try(j + 1, sum);
        }

        sum -= a[j];
        v.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(0, 0);
}