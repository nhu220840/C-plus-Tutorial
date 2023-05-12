#include <bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    string birthday;
    string address;
    double gpa;
    void input(){
        getline(cin, name);
        getline(cin, birthday);
        getline(cin, address);
        cin >> gpa;
        cin.ignore();
    }
    void output(){
        cout << name << " " << birthday << " " << address << " " << fixed << setprecision(2) << gpa << endl;
    }
};

typedef Student St;

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string, int> mp;
    while(n--){
        St x; x.input();
        mp[x.address]++;
    }
    int max_freq = INT_MIN;
    for(auto it : mp){
        max_freq = max(max_freq, it.second);
    }
    for(auto it : mp){
        if(it.second == max_freq){
            cout << it.first << endl;
        }
    }
}