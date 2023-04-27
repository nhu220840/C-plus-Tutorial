#include <bits/stdc++.h>

using namespace std;

int first_pos(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return res;
}

int last_pos(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return res;
}

int lonhonbangx(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] >= x){
            res = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return res;
}

int lonhonx(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] > x){
            res = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return res;
}


int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p1 = first_pos(a, n, x);
    int p2 = last_pos(a, n, x);
    int p3 = lonhonbangx(a, n, x);
    int p4 = lonhonx(a, n, x);
    cout << p1 << endl << p2 << endl << p3 << endl << p4 << endl;
    if(p1 != -1)
        cout << p2 - p1 + 1;
    else
        cout << 0;
        
}