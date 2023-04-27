#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; cin >> n;
   for(int i = 1; i <= n; i++){
       cout << i << " ";
   }
   cout << endl;
   for(int i = n; i >= 0; i--){
       cout << i << " ";
   }
   cout << endl;
   for(int i = 0; i <= n; i += 2){
       cout << i << " ";
   }
   cout << endl;
   for(int i = 1; i <= n; i += 2){
       cout << i << " ";
   }
   cout << endl;
   for(int i = 0; i < n; i += 4){
       cout << i << " ";
   }
   cout << endl;
   for(int i = 0; i < n; i++){
       cout << char(97 + i) << " ";
   }
   cout << endl;
   for(int i = 0; i < n; i++){
       cout << char(122 - n + 1 + i) << " ";
   }
}

