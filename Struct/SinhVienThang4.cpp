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
    vector<St> v;
    vector<int> tmp;
    cin.ignore();
    while(n--){
        St x; x.input();
        string date;
        stringstream ss(x.birthday);
        while(getline(ss, date, '/')){
            int day = stoi(date);
            tmp.push_back(day);
        }
        if(tmp[1] == 4)
            v.push_back(x);
        tmp.clear();
    }
    for(auto x : v){
        x.output();
    }
}