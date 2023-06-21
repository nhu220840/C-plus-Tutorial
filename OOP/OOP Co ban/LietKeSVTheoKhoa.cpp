#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string ID, name, class_name, email;
public:
    void convertedName(){
        string word, tmp = "";
        stringstream ss(name);
        while(ss >> word){
            tmp += toupper(word[0]);
            for(int j = 1; j < word.length(); j++){
                tmp += tolower(word[j]);
            }
            tmp += " ";
        }
        tmp.pop_back();
        name = tmp;
    }

    void input(){
        cin >> ID;
        cin.ignore();
        getline(cin, name);
        convertedName();
        cin >> class_name >> email;
    }

    string getPeriod(){
        return ID.substr(0, 4);
    }

    void print(){
        cout << ID << " " << name << " " << class_name << " " << email << endl;
    }
};

int main(){
    int n; cin >> n;
    Student a[n];
    for(Student &x : a) x.input();
    int q; cin >> q;
    while(q--){
        int year; cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << " :" << endl;
        for(Student x : a){
            if(x.getPeriod() == to_string(year))
                x.print();
        }
    }
}