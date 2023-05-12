#include <bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    string birthday;
    string country;
    int math;
    int physic;
    int chem;
    int gpa;
    void input(){
        getline(cin, name);
        getline(cin, birthday);
        getline(cin, country);
        cin >> math >> physic >> chem;
        gpa = math + physic + chem;
        cin.ignore();
    }
    void output(){
        cout << name << " " << birthday << " " << country << " " << math + physic + chem;
    }
};

typedef Student St;

int main(){
    int n; cin >> n;
    vector<St> v;
    cin.ignore();
    while(n--){
        St x; x.input();
        v.push_back(x);
    }
    cout << "DANH SACH THU KHOA :" << endl;
    int max_gpa = INT_MIN;
    for(auto x : v){
        max_gpa = max(max_gpa, x.gpa);
    }
    for(auto x : v){
        if(x.gpa == max_gpa){
            x.output();
            cout << endl;
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for(auto x : v){
        if(x.gpa >= 24){
            x.output();
            cout << " DO" << endl;
        }
        else{
            x.output();
            cout << " TRUOT" << endl;
        }
    } 
}