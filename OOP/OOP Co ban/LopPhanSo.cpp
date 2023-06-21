#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Fraction{
private:
    ll numerator, denominator;
public:
    void input(){
        cin >> numerator >> denominator;
    }

    Fraction(){

    }

    Fraction(ll numerator, ll denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void Simplify(){
        ll GCD = __gcd(numerator, denominator);
        numerator /= GCD;
        denominator /= GCD;
    }

    Fraction operator + (Fraction b){
        ll commonDenominator = this->denominator * b.denominator;
        ll commonNumerator = this->numerator * b.denominator + this->denominator * b.numerator;
        Fraction res = Fraction(commonNumerator, commonDenominator);
        res.Simplify();
        return res;
    }

    friend Fraction operator * (Fraction a, Fraction b);
    
    void print(){
        cout << numerator << "/" << denominator << " ";
    }
};

Fraction operator * (Fraction a, Fraction b){
    ll commonNumerator = a.numerator * b.numerator;
    ll commonDenominator = a.denominator * b.denominator;
    Fraction res = Fraction(commonNumerator, commonDenominator);
    res.Simplify();
    return res;
}

void solve(){
    Fraction a, b;
    a.input(); b.input();
    Fraction sum = a + b;
    Fraction c = sum * sum;
    Fraction d = a * b * c;
    c.print(); d.print();
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}