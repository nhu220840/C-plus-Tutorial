#include <bits/stdc++.h>
#define el int<<'\n'
#define NAME "bai1"

using namespace std;
using ll = long long;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

ll Rand(ll l, ll h){
    return l + (1ll * rd()* rd() % (h - l + 1) + (h - l +1)) % (h-l+1);
}

void MakeTest(){
    ofstream inp(NAME".inp");
    inp << 1;
}

const int NTEST = 1000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    srand(time(0));
    for(int iTest = 1; iTest <= NTEST; iTest++){
        MakeTest();

        system(NAME"_trau.exe");
        system(NAME".exe");

        if(system("fc "NAME".out"NAME".ans") != 0){
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
}