#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    
    int res[n];
    stack<int> st; //stack de luu chi so cua mang 
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[i] > a[st.top()]){
            res[st.top()] = a[i]; //cap nhat so lon hon dau tien ben phai
            st.pop();
        }
        st.push(i); //day chi so vao stack
    }
    while(!st.empty()){
        res[st.top()] = -1;
        st.pop();
    }
    for(int x : res) cout << x << " ";
}