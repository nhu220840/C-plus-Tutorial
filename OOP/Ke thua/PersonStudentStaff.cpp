#include <bits/stdc++.h>

using namespace std;

class Person{
private:
    string name, address;
public:
    Person(string name, string address){
        this->name = name;
        this->address = address;
    }

    string getName(){
        return name;
    }

    void print(){
        cout << "Full Name : " << name << endl;
        cout << "Address : " << address << endl;
    }
};

class Student : public Person{
private:
    string program;
    int year;
    double fee;
public:
    Student(string name, string address, string program, int year, double fee) : Person(name, address){
        this->program = program;
        this->year = year;
        this->fee = fee;
    }

    double getFee(){
        return fee;
    }

    void print(){
        Person::print();
        cout << "Program : " << program << endl;
        cout << "Year : " << year << endl;
        cout << "Fee : " << fee << " $" << endl;
        cout << "-----------------" << endl;
    }
};

class Staff : public Person{
private:
    string school;
    double pay;
public:
    Staff(string name, string address, string school, double pay) : Person(name, address){
        this->school = school;
        this->pay = pay;
    }

    double getSalary(){
        return pay;
    }

    void print(){
        Person::print();
        cout << "School : " << school << endl;
        cout << "Pay : " << pay << " $" << endl;
        cout << "-----------------" << endl;
    }
};

bool SortStaffBySalary(Staff a, Staff b){
    if(a.getSalary() != b.getSalary())
        return a.getSalary() > b.getSalary();
    return a.getName() < b.getName();
}

bool SortStudentByFee(Student a, Student b){
    if(a.getFee() != b.getFee())
        return a.getFee() > b.getFee();
    return a.getName() < b.getName();
}

int main(){
    int n, m; cin >> n >> m;
    vector<Student> listOfStudents;
    vector<Staff> listOfStaffs;
    for(int i = 0; i < n; i++){
        string tmp; cin >> tmp;
        cin.ignore();
        string name; getline(cin, name);
        string address; getline(cin, address);
        string program; getline(cin, program);
        int year;
        double fee;
        cin >> year >> fee;
        listOfStudents.push_back(Student(name, address, program, year, fee));
    }

    for(int i = 0; i < m; i++){
        string tmp; cin >> tmp;
        cin.ignore();
        string name, address, school;
        double pay;
        getline(cin, name);
        getline(cin, address);
        getline(cin, school);
        cin >> pay;
        listOfStaffs.push_back(Staff(name, address, school, pay));
    }

    sort(listOfStaffs.begin(), listOfStaffs.end(), SortStaffBySalary);
    sort(listOfStudents.begin(), listOfStudents.end(), SortStudentByFee);

    cout << "Student List :" << endl;
    cout << "-----------------" << endl;
    for(Student x : listOfStudents) x.print();

    cout << "Staff List :" << endl;
    cout << "-----------------" << endl;
    for(Staff x : listOfStaffs) x.print();
}