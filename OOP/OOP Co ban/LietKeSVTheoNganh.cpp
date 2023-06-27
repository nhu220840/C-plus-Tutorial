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

    string getMajor(){
        return class_name;
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
    cin.ignore();
    while(q--){
        string major; cin >> major;
        cout << "DANH SACH SINH VIEN NGANH ";
        if(major == "CNTT")
            cout << "CONG NGHE THONG TIN :" << endl;
        else if(major == "DTVT")
            cout << "DIEN TU VIEN THONG :" << endl;
        else if(major == "KT")
            cout << "KE TOAN :" << endl;
        else
            cout << "MARKETING :" << endl;
        for(Student x : a){
            if(x.getMajor().substr(0, 2) == major || x.getMajor().substr(0, 4) == major)
                x.print();
        }
    }
}