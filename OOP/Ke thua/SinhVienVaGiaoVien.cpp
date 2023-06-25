#include <bits/stdc++.h>

using namespace std;

class Person{
private:
    string ID, name, birth, address;
public:
    void convertedInfo(){
        if(birth[1] == '/')
            this->birth = "0" + this->birth;
        if(birth[4] == '/')
            this->birth.insert(3, "0");

        string res = "", word;
        stringstream ss(name);
        while(ss >> word){
            res += toupper(word[0]);
            for(int j = 1; j < word.length(); j++){
                res += tolower(word[j]);
            }
            res += " ";
        }
        res.pop_back();
        name = res;
    }

    Person(string ID, string name, string birth, string address){
        this->ID = ID;
        this->name = name;
        this->birth = birth;
        this->address = address;
        convertedInfo();
    }

    void print(){
        cout << ID << " " << name << " " << birth << " " << address << " ";
    }
};

class Lecturer : public Person{
private:
    string major;
    int salary;
public:
    Lecturer(string ID, string name, string birth, string address, string major, int salary) : Person(ID, name, birth, address){
        this->major = major;
        this->salary = salary;
    }

    void print(){
        Person::print();
        cout << major << " " << salary << endl;
    }
};

class Student : public Person{
private:
    string class_name;
    double gpa;
public:
    Student(string ID, string name, string birth, string address, string class_name, double gpa) : Person(ID, name, birth, address){
        this->class_name = class_name;
        this->gpa = gpa;
    }

    void print(){
        Person::print();
        cout << class_name << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    int n; cin >> n;
    vector<Lecturer> listOfLecturers;
    vector<Student> listOfStudents;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ID, name, birth, address;
        getline(cin, ID);
        getline(cin, name);
        getline(cin, birth);
        getline(cin, address);
        if(ID.substr(0, 2) == "GV"){
            string major; getline(cin, major);
            int salary; cin >> salary;
            Lecturer lec(ID, name, birth, address, major, salary);
            listOfLecturers.push_back(lec);
        }
        else{
            string class_name; getline(cin, class_name);
            double gpa; cin >> gpa;
            Student student(ID, name, birth, address, class_name, gpa);
            listOfStudents.push_back(student);
        }
    }
    cout << "DANH SACH GIAO VIEN :" << endl;
    for(Lecturer x : listOfLecturers) x.print();
    cout << "DANH SACH SINH VIEN :" << endl;
    for(Student x : listOfStudents) x.print();
}