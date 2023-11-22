#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: Dem so luong cac xau 1 lien nhau, sau do sort giam dan

//VD: 1000101110011111 
// 5, 3, 1, 1
// Ti di truoc nen ti se xoa nhung vi tri co nhieu so 1 nhat
// So lan xoa so le nhau
// => Ti xoa 5 + 1 = 6

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    s += '0';
    vector<int> v;
    int count1 = 0;
    for(char x : s){
        if(x == '1') count1++;
        else{
            if(count1 != 0){
                v.push_back(count1);
                count1 = 0;
            }
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    int res = 0;
    for(int i = 0; i < v.size(); i += 2) res += v[i];
    cout << res; 
}