#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(ll a, ll b){
    return a < b;
}

class Time{
private:
    int hour, minute, sec;
public:
    void input(){
        cin >> hour >> minute >> sec;
    }

    bool operator < (Time b){
        if(this->hour != b.hour)
            return this->hour < b.hour;
        else if(this->minute != b.minute)
            return this->minute < b.minute;
        return this->sec < b.sec;
    }

    void print(){
        cout << hour << " " << minute << " " << sec << endl;
    }

};

int main(){
    int n; cin >> n;
    Time a[n];
    for(int i = 0; i < n; i++){
        a[i].input();
    }
    sort(a, a + n);
    for(Time x : a){
        x.print();
    }
}