#include <bits/stdc++.h>

using namespace std;

class Employee{
private:
    static int cnt;
    string ID, name, gender, birth, address, TIN, date;
public:
    friend istream& operator >> (istream& in, Employee &x);

    friend ostream& operator << (ostream& out, Employee x);
};

int Employee::cnt = 0;

void convertedDay(string &day){
    if(day[1] == '/')
        day = "0" + day;
    if(day[4] == '/')
        day.insert(3, "0");
}

istream& operator >> (istream& in, Employee &x){
    Employee::cnt++;
    x.ID = string(5 - to_string(Employee::cnt).length(), '0') + to_string(Employee::cnt);
    cin.ignore();
    getline(in, x.name);
    in >> x.gender >> x.birth;
    cin.ignore();
    getline(in, x.address);
    in >> x.TIN >> x.date;
    convertedDay(x.birth);
    convertedDay(x.date);
    return in;
}

ostream& operator << (ostream& out, Employee x){
    out << x.ID << " " << x.name << " " << x.gender << " " << x.birth << " " << x.address << " " << x.TIN << " " << x.date << endl; 
    return out;
}

int main(){
    int n; cin >> n;
    Employee a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(Employee x : a){
        cout << x;
    }
}