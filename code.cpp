#include<stdio.h>

int tn(int n){
	int dao = 0;
	int tmp = n;
	while (n){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if (tmp == dao) 
		return 1;
	else 
		return 0;
}

int check(int n){
	int cnt = 0, i = 0, sum = 0;
	while(n){
		i = n % 10;
		sum += i;
		if (i == 6){
			cnt++;
		}
		n /= 10;
	}
	if (cnt >= 1 && sum % 10 == 8) return 1;
	else return 0;
}

int main(){
	int a, b; scanf ("%d %d", &a, &b);
	for (int i = a; i <= b; i++){
		if (tn(i) && check(i)){
			printf ("%d ", i);
		}
	}
}