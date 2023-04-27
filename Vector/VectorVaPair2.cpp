#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> point;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        point.push_back({{x, y}, z});
    }
    vector<int> v;
    for(int i = 0; i < n; i++){
        int sum = point[i].first.first + point[i].first.second + point[i].second;
        v.push_back(sum);
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}