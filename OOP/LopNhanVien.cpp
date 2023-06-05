#include <bits/stdc++.h>

using namespace std;

class Person{
private:
    string ID, name, gender, birth, address, TIN, date;
public:
    void input(){
        getline(cin, name);
        getline(cin, gender);
        getline(cin, birth);
        getline(cin, address);
        getline(cin, TIN);
        getline(cin, date);
    }

    void print(){
        cout << "00001" << " " << name << " " << gender << " " << birth << " " << address << " " << TIN << " " << date << endl; 
    }

};

int main(){
    Person x;
    x.input();
    x.print();
}