#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        int ktao = 1;
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j <= i){
                cout << i + ktao - 1 << " ";
                ktao++;
            }
            else{
                cout << i + ktao - 3 << " ";
                ktao--;
            }
        }
        cout << endl;
    }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << "  ";
    //     }
    //     int ktao = 1, cnt = 1;
    //     for(int j = 1; j <= 2 * i - 1; j++){
    //         if(j <= i){
    //             cout << i + ktao - 1 << " ";
    //             ktao++;
    //         }
    //         else{
    //             int x = 2 * i - 1;
    //             x -= cnt;
    //             cout << x << " ";
    //             cnt++;
    //         }
    //     }
    //     cout << endl;
    // }

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << "  ";
//         }
//         for (int j = i; j <= 2 * i - 1; j++) {
//             cout << j << " ";
//         }
//         for (int j = 2 * i - 2; j >= i; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }