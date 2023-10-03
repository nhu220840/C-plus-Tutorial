#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, X[100];

bool found = false;

int isPrime[205];

void sieve(){
    for(int i = 0; i <= 200; i++){
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i <= sqrt(200); i++){
        if(isPrime[i]){
            for(int j = i * i; j <= 200; j += i){
                isPrime[j] = 0;
            }
        }
    }
}

vector<int> primes;

void enter(){
    cin >> n >> k;
    for(int i = 1; i <= 200; i++){
        if(isPrime[i]) primes.push_back(i);
    }
}


//X[i] : start => n

void Try(int i, int start, int sum){
    for(int j = start; j <= 200; j++){
        X[i] = primes[j];
        sum += primes[j];
        if(i == k && sum == n){
            found = true;
            for(int l = 1; l <= i; l++){
                cout << X[l];
                if(l != i) cout << " + ";
                else cout << endl;
            }
        }
        else if(i < k && sum < n){
            Try(i + 1, j + 1, sum);
        }
        //back track
        sum -= primes[j];
    }
}   

int main(){
	sieve();
	enter();
	Try(1, 1, 0);
}