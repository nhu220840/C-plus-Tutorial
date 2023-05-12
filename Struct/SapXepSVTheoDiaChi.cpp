#include <bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    string birthday;
    string country;
    double gpa;
    void input(){
        getline(cin, name);
        getline(cin, birthday);
        getline(cin, country);
        cin >> gpa;
        cin.ignore();
    }
    void output(){
        cout << name << " " << birthday << " " << country << " " << fixed << setprecision(2) << gpa << endl;
    }
};

typedef Student St;

bool cmp(St a, St b){
    if(a.country != b.country)
        return a.country < b.country;
    else
        return a.gpa > b.gpa;
}

int main(){
    int n; cin >> n;
    vector<St> v;
    cin.ignore();
    while(n--){
        St x; x.input();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        x.output();
    }
}