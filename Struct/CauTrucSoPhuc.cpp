#include <bits/stdc++.h>

using namespace std;

struct complexNumber{
    int real;
    int vir;
    void input(){
        cin >> real >> vir;
    }
    void output(){
        cout << real << " " << vir << endl;
    }
};

typedef complexNumber cn;

cn addition(cn a, cn b){
    cn res;
    res.real = a.real + b.real;
    res.vir = a.vir + b.vir;
    return res;
}

cn subtraction(cn a, cn b){
    cn res;
    res.real = a.real - b.real;
    res.vir = a.vir - b.vir;
    return res;
}

cn multiplication(cn a, cn b){
    cn res;
    res.real = a.real * b.real - a.vir * b.vir;
    res.vir = a.real * b.vir + a.vir * b.real;
    return res;
}

int main(){
    cn a, b;
    a.input();
    b.input();
    addition(a, b).output();
    subtraction(a, b).output();
    multiplication(a, b).output();
}