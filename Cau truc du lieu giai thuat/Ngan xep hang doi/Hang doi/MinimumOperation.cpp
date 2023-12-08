#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<int, int>;

int bfs(int s, int t){
    set<int> se; //luu trang thai cua cac so da dung roi (tuong tu nhu mang visited)
    queue<ii> q; //first: trang thai hien tai, second: so thao tac
    q.push({s, 0});
    se.insert(s);
    
    while(!q.empty()){
        ii top = q.front(); q.pop();
        if(top.first == t)
            return top.second;
        int x = top.first, y = top.second;

        if(x - 1 >= 1 && !se.count(x - 1)){
            q.push({x - 1, y + 1});
            se.insert(x - 1);
        }
        if(!se.count(x * 2)){
            q.push({x * 2, y + 1});
            se.insert(x * 2);
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int S, T; cin >> S >> T;
        cout << bfs(S, T) << endl;
    }
}