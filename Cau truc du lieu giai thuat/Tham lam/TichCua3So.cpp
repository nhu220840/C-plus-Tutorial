#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: tach so do thanh cac tsnt
//Voi truong hop co the tach duoc nhieu hon 3 so ngto mac dinh dung
//Voi truong hop chi tach duoc thanh 2 so 2 va 3:
//- Neu so mu cua ca 2 so >= 4 => YES 
//     VD: 2^2 x 3^2 = 2 x 3 x 6
//      2^1 x 3^3, 2^3 x 3^1 
//- Neu truong hop chi tach duoc thanh duy nhat 1 so ngto
//  Neu so mu cua so do >= 6 => YES
//     VD: 2^6 = (2) x (2 x 2) x (2 x 2 x 2) = 2 x 4 x 6 

bool isValid(int n){
    int countPrime = 0, totalPower = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            countPrime++;
            while(n % i == 0){
                totalPower++;
                n /= i;
            }
        }
    }

    if(n != 1){
        countPrime++;
        totalPower++;
    }

    return (countPrime >= 3) || (countPrime == 2 && totalPower >= 4) || (countPrime == 1 && totalPower >= 6); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    if(isValid(n)) cout << "YES";
    else cout << "NO";
}