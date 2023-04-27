#include <bits/stdc++.h>

using namespace std;

//next_permutation(a, a + n)
//prev_permutation(a, a + n): sinh hoan vi nguoc

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
        //a[i] = n - i;
    }
    do{
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }while(next_permutation(a, a + n));
    //while(prev_permutation(a, a + n));
}