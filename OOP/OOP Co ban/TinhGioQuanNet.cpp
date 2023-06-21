#include <bits/stdc++.h>

using namespace std;

class Account{
private:
    string username, password, name, timeStart, timeEnd;
public:
    void input(){
        cin >> username >> password;
        cin.ignore();
        getline(cin, name);
        cin >> timeStart >> timeEnd;
    }

    int getTime(){
        int hour_start = stoi(timeStart.substr(0, 2));
        int min_start = stoi(timeStart.substr(3, 2));
        int hour_end = stoi(timeEnd.substr(0, 2));
        int min_end = stoi(timeEnd.substr(3, 2));
        return (hour_end * 60 + min_end) - (hour_start * 60 + min_start);
    }

    string getUsername(){
        return username;
    }

    void print(){
        int minute = getTime();
        cout << username << " " << password << " " << name << " " << minute / 60 << " gio " << minute % 60 << " phut" << endl; 
    }
};

bool cmp(Account a, Account b){
    if(a.getTime() != b.getTime())
        return a.getTime() > b.getTime();
    return a.getUsername() < b.getUsername();
}

int main(){
    int n; cin >> n;
    Account a[n];
    for(int i = 0; i < n; i++){
        a[i].input();
    }
    sort(a, a + n, cmp);
    for(Account x : a){
        x.print();
    }
}