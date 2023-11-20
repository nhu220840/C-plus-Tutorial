#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

struct Fraction{
    ll numerator, denominator;

    void simplify(){
        ll commonDenominator = gcd(numerator, denominator);
        numerator /= commonDenominator;
        denominator /= commonDenominator;
    }

    Fraction operator - (Fraction b){
        ll newDen = this->denominator * b.denominator;
        ll newNum = this->numerator * b.denominator - b.numerator * this->denominator;
        Fraction res = Fraction{newNum, newDen};
        res.simplify();
        return res;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll p, q; cin >> p >> q;
    Fraction res = Fraction{p, q};
    while(res.numerator != 0){
        ll x = ceil(1.0 * res.denominator / res.numerator);
        Fraction tmp = Fraction{1, x};
        cout << "1/" << x;
        res = res - tmp;
        if(res.numerator != 0) cout << " + ";

    }
}