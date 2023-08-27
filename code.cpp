#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fi first
#define se second

int main(){
    string s; getline(cin, s);
    int cntAlpha = 0, cntNum = 0, cntSpeacial = 0;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])) cntAlpha++;
        else if(isdigit(s[i])) cntNum++;
        else cntSpeacial++;
    }
    cout << cntAlpha << " " << cntNum << " " << cntSpeacial;
}
