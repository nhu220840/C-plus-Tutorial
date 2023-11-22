#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: co gang lam sao de dua ve so dong = kc

//VD: 8 dong va 11 kc
//Cau hoi dat ra: Can bao nhieu buoc de dua ve dong = kc?
//                Sau khi bang nhau thi = bao nhieu?
// 8 - x = 11 - 2x (lay so to tru di so to)
// x = 11 - 8 = 3 (can 3 buoc de dua ve dong = kc)
// sau khi dua ve thi dong = kc = dong - so buoc (kc - 2 * so buoc)

//Sau do lay so do tru cho cap (3, 3)
//Cap (3, 3) o day tuong ung voi 1 cuoc va 1 lien (1 + 2, 2 + 1)

//Tru den khi nao het thi so du se con lai la 2 truong hop
//Neu du (1, 1): ko mua dc them vat pham nao nua
//Neu du (2, 1): mua them dc 1 vat pham

//Truong hop dac biet: neu 1 trong 2 so qua lon (VD: 3 dong 10 kc)
//Khi do x = 7, nhung chi co 3 dong, se den 1 luc nao day tru thi so dong se ve 0 truoc khi dong = kc
//Khi do kqua se = luon so dong = 3

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    int res = 0;
    if(a > b) swap(a, b); //a luon la so nho hon
    int step = b - a;
    if(a <= step) res = a;
    else{
        res += step;
        int left = a - step;
        res += floor(1.0 * left / 3) * 2;
        int remainder = left % 3;
        if(remainder == 2) res++;
    }
    cout << res;

}