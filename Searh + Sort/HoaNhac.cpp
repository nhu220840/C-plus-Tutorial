#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    multiset<int> ticket_prices;
    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        ticket_prices.insert(price);
    }
    for(int i = 0; i < m; i++){
        int max_price;
        cin >> max_price;
        if(ticket_prices.empty())
            cout << -1 << endl;
        else{
            auto it = ticket_prices.upper_bound(max_price);
            if(it == ticket_prices.begin()){
                cout << -1 << endl;
            } 
            else{
                --it;
                cout << *it << endl;
                ticket_prices.erase(it);
            }
        }
    }
}