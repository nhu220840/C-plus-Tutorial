#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string ID, name, room, birth;
    double gpa;
public:
    void convertedBirth(){
        if(this->birth[1] == '/')
            this->birth = "0" + this->birth;
        if(this->birth[4] == '/')
            this->birth.insert(3, "0");
    }

    Student(string name, string room, string birth, double gpa){
        this->ID = "SV001";
        this->name = name;
        this->room = room;
        this->birth = birth;
        this->gpa = gpa;
        convertedBirth();
    }

    friend ostream& operator << (ostream& out, Student x);
};

ostream& operator << (ostream& out, Student x){
    out << x.ID << " " << x.name << " " << x.room << " " << x.birth << " " << fixed << setprecision(1) << x.gpa << endl;
    return out;
}

int main(){
    string name, birth, room;
    double gpa;
    getline(cin, name);
    cin >> room >> birth >> gpa;
    Student x = Student(name, room, birth, gpa);
    x.convertedBirth();
    cout << x;
}