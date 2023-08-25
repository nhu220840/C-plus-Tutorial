#include <bits/stdc++.h>

using namespace std;

#define di pair<double, int>

#define fi first
#define se second

int main(){
    string name;
    int credit, mark;
    map<string, di> Student;
    while(cin >> name >> credit >> mark){
        if(Student.find(name) != Student.end()){
            Student[name].fi += credit * mark;
            Student[name].se += credit;
        }
        else{
            Student[name].fi = credit * mark;
            Student[name].se = credit;
        }
    }
    for(auto it = Student.rbegin(); it != Student.rend(); it++){
        cout << it->fi << " : " << fixed << setprecision(2) << it->se.fi / it->se.se << endl;
    }
}