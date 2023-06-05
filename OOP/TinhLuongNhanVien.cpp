#include <bits/stdc++.h>

using namespace std;

class Employee{
private:
    string name, job, ID;
    int basicSalary, workDay;
public:
    void input(){
        this->ID = "NV01";
        getline(cin, name);
        cin >> basicSalary >> workDay;
        cin.ignore();
        cin >> job;
    }

    int salary(){
        return basicSalary * workDay;
    }

    int bonusSalary(){
        if(this->workDay >= 25)
            return salary() * 20 / 100;
        else if(this->workDay >= 22)
            return salary() * 10 / 100;
        else
            return 0;
    }

    int allowance(){
        if(job == "GD")
            return 250000;
        if(job == "PGD")
            return 200000;
        if(job == "TP")
            return 180000;
        if(job == "NV")
            return 150000;
    }

    int finalEarnings(){
        return salary() + bonusSalary() + allowance();
    }

    void print(){
        cout << ID << " " << name << " " << salary() << " " << bonusSalary() << " " << allowance() << " " << finalEarnings() << endl;
    }
};

int main(){
    Employee x;
    x.input();
    x.print();
}