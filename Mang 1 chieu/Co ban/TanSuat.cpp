#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int check = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                check = 0;
            }
        }
        if(check == 1){
            int cnt = 1;
            for(int j = i+1; j < n; j++){
                if(a[i] == a[j]) 
                    cnt++;
            }
            cout << a[i] << " " << cnt << endl;
        }
    }
}