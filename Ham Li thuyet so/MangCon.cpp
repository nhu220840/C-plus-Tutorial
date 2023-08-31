#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < m; i++){
        cin >> B[i];
    }
    int indexA = 0, indexB = 0;
    while(indexA < n && indexB < m){
        if(A[indexA] == B[indexB]){
            indexB++;
        }
        indexA++;
    }
    if(indexB == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
