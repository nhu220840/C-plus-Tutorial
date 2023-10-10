#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //Max heap: phan tu tren top la phan tu lon nhat
    priority_queue<int> q;
    q.push(1);
    q.push(3);
    q.push(0);
    q.push(2);
    q.push(4);
    cout << q.top() << endl;
    q.push(6);
    q.push(5);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    cout << q.size() << endl; //empty, clear

    //Min heap: phan tu tren top la phan tu nho nhat
    priority_queue<int, vector<int>, greater<int>> Q;

}