#include <bits/stdc++.h>

using namespace std;

class Student{
private: 
    string ID, name, position;
    double math, phys, chem;
public:
    void input(){
        getline(cin, ID);
        getline(cin, name);
        cin >> math >> phys >> chem;
        cin.ignore();
    }

    double mark(){
        string s = this->ID.substr(2, 1);
        if(s == "1")
            return math + phys + chem + 0.5;
        if(s == "2")
            return math + phys + chem + 1.0;
        if(s == "3")
            return math + phys + chem + 2.5;
    }

    string isPass(){
        if(mark() >= 24)
            return "TRUNG TUYEN";
        else
            return "TRUOT";
    }

    void print(){
        cout << ID << " " << name << " " << this->ID.substr(2, 1) << " ";
        if(abs(mark() - (int)mark()) == 0)
            cout << fixed << setprecision(0) << mark() << " ";
        else
            cout << fixed << setprecision(1) << mark() << " ";
        cout << isPass() << endl; 
    }
};

int main(){
    Student x;
    x.input();
    x.print();
}