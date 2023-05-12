#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, s; scanf("%d %d", &m, &s);
    if(s > 9 * m || (s == 0 && m >= 2)){
        cout << "NOT FOUND";
    }
    else{
        int to[m], be[m];
        int tmp = s;
        //mang so lon thi dien tu dau den cuoi
        for(int i = 0; i < m; i++){
            if(s >= 9){
                to[i] = 9; s -= 9;
            }
            else{
                to[i] = s; s = 0;
            }
        }
        //mang so be thi dien ti cuoi len dau
        //luu y giu lai 1 don vi cho hang cuoi cung de phong TH ko du chu so
        //VD: 0499, giu lai 1 don vi de thanh 1399
        tmp--;
        for(int i = m - 1; i > 0; i--){
            if(tmp >= 9){
                be[i] = 9; tmp -= 9;
            }
            else{
                be[i] = tmp; tmp = 0;
            }
        }
        be[0] = tmp + 1; //them 1 don vi vua giu lai
        for(int i = 0; i < m; i++){
            cout << be[i];
        }
        cout << endl;
        for(int i = 0; i < m; i++){
            cout << to[i];
        }
    }
}