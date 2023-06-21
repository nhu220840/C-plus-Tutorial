#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string ID, name, class_name, email;
public:
    Student(string ID, string name, string class_name, string email){
        this->ID = ID;
        this->name = name;
        this->class_name = class_name;
        this->email = email;
    }

    void print(){
        cout << ID << " " << name << " " << class_name << " " << email << endl;
    }

    string getID(){
        return ID;
    }
};

bool cmp(Student a, Student b){
    return a.getID() < b.getID();
}

int main(){
    vector<Student> v;
    string ID;
    while(getline(cin, ID)){
        string name; getline(cin, name);
        string class_name; getline(cin, class_name);
        string email; getline(cin, email);
        v.push_back(Student(ID, name, class_name, email));       
    }

    sort(v.begin(), v.end(), cmp);
    for(Student x : v) x.print();
}