#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string ID, name, class_name, email;
public:
    void input(){
        cin >> ID;
        cin.ignore();
        getline(cin, name);
        cin >> class_name >> email;
    }

    void print(){
        cout << ID << " " << name << " " << class_name << " " << email << endl;
    }

    string getID(){
        return ID;
    }

    string getClassname(){
        return class_name;
    }
};

bool cmp(Student a, Student b){
    if(a.getClassname() != b.getClassname())
        return a.getClassname() < b.getClassname();
    return a.getID() < b.getID();
}

int main(){
    int n; cin >> n;
    Student a[n];
    for(Student &x : a) x.input();
    sort(a, a + n, cmp);
    for(Student x : a) x.print();
}