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

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<St> v;
    while(n--){
        St x; x.input();
        if(x.country == "Nam Dinh" && x.gpa >= 2.5){
            v.push_back(x);
        }
    }
    for(auto x : v){
        x.output();
    }
}