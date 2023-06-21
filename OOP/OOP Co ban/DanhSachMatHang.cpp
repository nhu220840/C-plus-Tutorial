#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Product{
private:
    string name, unit, code;
    ll buyPrice, sellPrice, profit;

public:
    void input(int i){
        this->code = "MH" + string(4 - to_string(i).length(), '0') + to_string(i);
        cin.ignore();
        getline(cin, name);
        getline(cin, unit);
        cin >> buyPrice >> sellPrice;
        profit = sellPrice - buyPrice;
    } 

    bool operator < (Product b){
        if(this->profit != b.profit)
            return this->profit > b.profit;
        return this->code < b.code;
    }

    void print(){
        cout << code << " " << name << " " << unit << " " << buyPrice << " " << sellPrice << " " << profit << endl;
    }
};

int main(){
    int n; cin >> n;
    Product a[n];
    for(int i = 0; i < n; i++){
        a[i].input(i + 1);
    }
    sort(a, a + n);
    for(Product x : a){
        x.print();
    }
}