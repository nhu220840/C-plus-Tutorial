#include <bits/stdc++.h>

using namespace std;

class Teacher{
private:
    string code, name;
    int basicSalary;
public:
    void input(){
        getline(cin, code);
        getline(cin, name);
        cin >> basicSalary;
        cin.ignore();
    }

    int getLevelOfSalary(){
        string s = this->code.substr(2, 2);
        int level = stoi(s);
        return level;
    }

    int salary(){
        string s = this->code.substr(0, 2);
        if(s == "HT")
            return basicSalary * getLevelOfSalary() + 2000000;
        if(s == "HP")
            return basicSalary * getLevelOfSalary() + 900000;
        if(s == "GV")
            return basicSalary * getLevelOfSalary() + 500000;
    }

    void print(){
        cout << code << " " << name << " " << getLevelOfSalary() << " " << salary() << endl;
    }
};

int main(){
    Teacher x;
    x.input();
    x.print();
}