#include <bits/stdc++.h>

using namespace std;

class Tutor{
private:
    string ID, name, subject;
public:
    void input(int stt){
        getline(cin, name);
        ID = "GV" + string(2 - to_string(stt).length(), '0') + to_string(stt);
        getline(cin, subject);
    }

    string getMajor(){
        string res = "";
        string word;
        stringstream ss(subject);
        while(ss >> word){
            res += toupper(word[0]);
        }
        return res;
    }

    string getName(){
        vector<string> v;
        string word;
        stringstream ss(name);
        while(ss >> word){
            v.push_back(word);
        }
        return v.back();
    }

    string getID(){
        return ID;
    }

    void print(){
        cout << ID << " " << name << " " << getMajor() << endl;
    }
};

bool cmp(Tutor a, Tutor b){
    if(a.getName() != b.getName())
        return a.getName() < b.getName();
    return a.getID() < b.getID();
}

int main(){
    int n; cin >> n;
    cin.ignore();
    Tutor a[n];
    for(int i = 0; i < n; i++){
        a[i].input(i + 1);
    }
    sort(a, a + n, cmp);
    for(Tutor x : a) x.print();
}