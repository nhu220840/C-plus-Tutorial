#include <bits/stdc++.h>

using namespace std;

class Person{
private:
    string name, gender, birth, address, TIN, date;
public:
    void convertedDay(string &day){
        if(day[1] == '/')
            day = "0" + day;
        if(day[4] == '/')
            day.insert(3, "0");
    }

    void normalizeName(string &s){
        for(char &c : s){
            c = tolower(c);
        }
        s[0] = toupper(s[0]);
    }

    void convertedName(){
        string tmp = "";
        string word;
        stringstream ss(this->name);
        while(ss >> word){
            normalizeName(word);
            tmp += word + " ";
        }
        tmp.pop_back();
        this->name = tmp;
    }

    void intput(){
        getline(cin, name);
        convertedName();
        cin >> gender >> birth;
        convertedDay(birth);
        cin.ignore();
        getline(cin, address);
        cin >> TIN >> date;
        convertedDay(date);
    }

    void print(){
        cout << "00001 " << name << " " << gender << " " << birth << " " << address << " " << TIN << " " << date << endl; 
    }

};

int main(){
    Person x;
    x.intput();
    x.print();
}