#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string name, ID;
    double mark[10];
public:
    void input(int stt){
        ID = "HS" + string(2 - to_string(stt).length(), '0') + to_string(stt);
        cin.ignore();
        getline(cin, name);
        for(int i = 0; i < 10; i++){
            cin >> mark[i];
        }
        cin.ignore();
    }

    double getGPA(){
        double sum = 0;
        for(int i = 0; i < 10; i++){
            sum += mark[i];
        }
        return sum / 10.0;
    }

    string getRank(){
        if(getGPA() >= 9)
            return "XUAT SAC";
        else if(getGPA() >= 8)
            return "GIOI";
        else if(getGPA() >= 7)
            return "KHA";
        else if(getGPA() >= 5)
            return "TB";
        else
            return "YEU";
    }

    string getID(){
        return ID;
    }

    void print(){
        cout << ID << " " << name << " " << fixed << setprecision(1) << getGPA() << " " << getRank() << endl; 
    }
};

bool cmp(Student a, Student b){
    if(a.getGPA() != b.getGPA())
        return a.getGPA() > b.getGPA();
    return a.getID() < b.getID();
}

int main(){
    int n; cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++){
        a[i].input(i + 1);
    }
    sort(a, a + n, cmp);
    for(Student x : a){
        x.print();
    }
}