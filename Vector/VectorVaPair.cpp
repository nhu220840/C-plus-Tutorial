#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> point(n);
    for(int i = 0; i < n; i++){
        cin >> point[i].first >> point[i].second;
    }
    vector<double> v;
    for(int i = 0; i < n; i++){
        double distance = sqrt(pow(point[i].first, 2) + pow(point[i].second, 2));
        v.push_back(distance);
    }
    for(double x : v){
        cout << fixed << setprecision(2) << x << " ";
    }
}