#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string name, birth;
    double s1, s2, s3;
public:
    double sum(){
        return s1 + s2 + s3;
    }

    void input(){
        getline(cin, this->name);
        getline(cin, this->birth);
        cin >> s1 >> s2 >> s3;
    }

    void print(){
        cout << name << " " << birth << " ";
        cout << fixed << setprecision(1) << sum() << endl;
    }
};

int main(){
    Student x;
    x.input();
    x.print();
}