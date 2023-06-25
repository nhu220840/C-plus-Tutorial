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
    string major, class_name;
    int salary;
public:
    Lecturer(string ID, string name, string birth, string address, string major, int salary, string class_name) : Person(ID, name, birth, address){
        this->major = major;
        this->salary = salary;
        this->class_name = class_name;
    }

    string getClass(){
        return class_name;
    }

    void print(){
        Person::print();
        cout << major << " " << salary << " " << class_name << endl;
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

    string getClass(){
        return class_name;
    }

    void print(){
        Person::print();
        cout << class_name << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    int n; cin >> n;
    vector<Lecturer> listOfLecturer;
    vector<Student> listOfStudent;
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
            string class_name; cin >> class_name;
            Lecturer lec(ID, name, birth, address, major, salary, class_name);
            listOfLecturer.push_back(lec);
        }
        else{
            string class_name; getline(cin, class_name);
            double gpa; cin >> gpa;
            Student student(ID, name, birth, address, class_name, gpa);
            listOfStudent.push_back(student);
        }
    }
    cin.ignore();
    string searchClass; getline(cin, searchClass);
    cout << "DANH SACH GIAO VIEN PHU TRACH LOP " << searchClass << " :" << endl;
    for(Lecturer x : listOfLecturer){
        if(x.getClass() == searchClass)
            x.print();
    }
    cout << "DANH SACH SINH VIEN LOP " << searchClass << " :" << endl;
    for(Student x : listOfStudent){
        if(x.getClass() == searchClass)
            x.print();
    }
}