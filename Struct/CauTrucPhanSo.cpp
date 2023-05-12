#include <bits/stdc++.h>

using namespace std;

struct phanso{
    int tu;
    int mau;
    void nhap(){
        cin >> tu >> mau;
    }
    void in(){
        cout << tu << "/" << mau << endl;
    }
};

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int lcm(int a, int b){
    return a/gcd(a, b) * b;
}

phanso rutgon(phanso a){
    phanso res;
    int uc = gcd(abs(a.tu), abs(a.mau));
    res.tu = a.tu / uc;
    res.mau = a.mau / uc;
    return res;
}

phanso tong(phanso a, phanso b){
    phanso res;
    int mc = lcm(a.mau, b.mau);
    res.mau = mc;
    res.tu = a.tu * (mc / a.mau) + b.tu * (mc / b.mau);
    return rutgon(res);
}

phanso hieu(phanso a, phanso b){
    phanso res;
    int mc = lcm(a.mau, b.mau);
    res.mau = mc;
    res.tu = a.tu * (mc / a.mau) - b.tu * (mc / b.mau);
    return rutgon(res);
}

int main(){
    phanso x, y;
    x.nhap();
    y.nhap();
    x = rutgon(x);
    y = rutgon(y);
    x.in();
    y.in();
    phanso t = tong(x, y);
    phanso h = hieu(x, y);
    t.in();
    h.in();
}