#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, final;
string s1, s2;

void initializeS1(){
    for(int i = 1; i <= n; i++){
        s1 += 'A' + i - 1;
    }
}

void initializeS2(){
    s2 = string(n, '1');
}

void nextGenS2(){
    int i = n;
    while(i >= 0 && s2[i] == (n + '0')){
        i--;
    } 
    if(i == -1)
        final = 1;
    else{
        s2[i]++;
        for(int j = i + 1; j <= n; j++){
            s2[j] = '1';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initializeS1();
    do{
        initializeS2();
        final = 0;
        while(!final){
            string tmp = s1 + s2;
            cout << tmp << endl;
            nextGenS2();
        }
    }while(next_permutation(s1.begin() + 1, s1.end()));
}
