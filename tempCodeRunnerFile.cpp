#include <stdio.h>
#include <math.h>

long long cal(int a, int b){
 return a * b;
}
int main(){
 printf("%lld", cal(1000000.5, 10000000.2));
}
