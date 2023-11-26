#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: Dung merge sort de chia mang ra roi so sanh 2 ve
//Xem them buoi tro giang 9 cua Vinh

ll merge(int a[], int l, int mid, int r){
    vector<int> left(a + l, a + mid + 1);
    vector<int> right(a + mid + 1, a + r + 1);

    int i = 0, j = 0;
    ll cnt = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] <= right[j]){
            a[l] = left[i];
            i++; l++;
        }
        else{
            a[l] = right[j];
            l++; j++;
            cnt += left.size() - i;
        }
    }

    while(i < left.size()){
        a[l] = left[i];
        i++; l++;
    }
    while(j < right.size()){
        a[l] = right[j];
        l++; j++;
    }

    return cnt;
}

ll mergeSort(int a[], int l, int r){
    if(l >= r) return 0;
    int mid = (l + r) / 2;
    return mergeSort(a, l, mid)
         + mergeSort(a, mid + 1, r)
         + merge(a, l, mid, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << mergeSort(a, 0, n - 1);
}