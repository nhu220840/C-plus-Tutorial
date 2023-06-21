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
            word[0] = toupper(word[0]);
            for(int j = 1; j < word.length(); j++){
                word[j] = tolower(word[j]);
            }
            tmp += word + " ";
        }
        tmp.pop_back();
        this->name = tmp;
    }

    void input(int i){
        cin.ignore();
        getline(cin, name);
        cin >> room >> birth >> gpa;
        convertedBirth();
        convertedName();
        this->ID = "SV" + string(3 - to_string(i).length(), '0') + to_string(i);
    }

    bool operator < (Student b){
        if(this->gpa != b.gpa)
            return this->gpa > b.gpa;
        return this->ID < b.ID;
    }

    void print(){
        cout << ID << " " << name << " " << room << " " << birth << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    int n; cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++){
        a[i].input(i + 1);
    }
    sort(a, a + n);
    for(auto x : a){
        x.print();
    }
}