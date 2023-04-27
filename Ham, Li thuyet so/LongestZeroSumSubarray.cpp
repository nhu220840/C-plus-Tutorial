#include <bits/stdc++.h>

using namespace std;

vector<int> findZeroSumSubarray(const vector<int>& a) {
    vector<int> res;
    unordered_map<int, int> m;
    m[0] = -1;
    int sum = 0, start = -1, end = -2;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        if (m.find(sum) != m.end()) {
            int j = m[sum];
            if (i - j > end - start) {
                start = j;
                end = i;
            }
        } 
        else {
            m[sum] = i;
        }
    }
    if (end - start >= 1) {
        for (int i = start + 1; i <= end; i++) {
            res.push_back(a[i]);
        }
    }
    return res;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> res = findZeroSumSubarray(a);
    if(res.size() == 0)
        cout << "NOT FOUND";
    else{
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
    }
}
