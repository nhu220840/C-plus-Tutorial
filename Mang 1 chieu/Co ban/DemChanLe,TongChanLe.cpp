#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int chan = 0, le = 0, tongchan = 0, tongle = 0;
    int a[n];
    for(int &x : a){
        cin >> x;
        if(x % 2 == 0){
            chan++;
            tongchan += x;
        }
        else{
            le++;
            tongle += x;
        }
    }
    cout << chan << endl << le << endl << tongchan << endl << tongle;
}