#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string ID, name, birth, room;
    double gpa;
public:
    void convertedBirth(){
        if(this->birth[1] == '/')
            this->birth = "0" + this->birth;
        if(this->birth[4] == '/')
            this->birth.insert(3, "0");
    }
    
    void normalize(string &s){
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    
    void convertedName(){
        string tmp = "", word;
        stringstream ss(this->name);
        while(ss >> word){
            normalize(word);
            tmp += word + " ";
        }
        tmp.pop_back();
        this->name = tmp;
    }

    Student(int i, string name, string birth, string room, double gpa){
        this->ID = "SV" + string(3 - to_string(i).length(), '0') + to_string(i);
        this->name = name;
        this->birth = birth;
        this->room = room;
        this->gpa = gpa;
        convertedBirth();
        convertedName();
    }

    friend ostream& operator << (ostream& out, Student x);
};

ostream& operator << (ostream& out, Student x){
    out << x.ID << " " << x.name << " " << x.room << " " << x.birth << " " << fixed << setprecision(2) << x.gpa << endl;
    return out;
}

int main(){
    int n; cin >> n;
    vector<Student> v;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string name, room, birth;
        double gpa;
        getline(cin, name);
        cin >> room >> birth >> gpa;
        Student x = Student(i + 1, name, birth, room, gpa);
        v.push_back(x);
    }

    for(Student x : v){
        cout << x;
    }
}