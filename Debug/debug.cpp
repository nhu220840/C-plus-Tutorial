#include <bits/stdc++.h>
#define el cout<<'\n'
#define NAME "bai1"

using namespace std;
using ll = long long;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

ll Rand(ll l, ll h){
    return l + (1ll * rd()* rd() % (h - l + 1) + (h - l +1)) % (h-l+1);
}

void MakeTest(){
    ofstream cout(NAME".inp");
    int n = Rand(1, 1e5);
    cout << n << endl;
    for(int i = 1; i <= n; i++){
        int a = Rand(1, 1e5);
        cout << a << " ";
    }
}

const int NTEST = 10000;

int main(){
    srand(time(0));
    for(int iTest = 1; iTest <= NTEST; iTest++){
        MakeTest();

        // system(NAME"_trau.exe");
        // system(NAME".exe");

        system(NAME".exe <"NAME".inp >"NAME".out");
        system(NAME"_trau.exe <"NAME".inp >"NAME".ans");

        if(system("fc "NAME".out"NAME".ans") != 0){
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
}