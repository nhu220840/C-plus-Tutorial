#include <stdio.h>
#include <math.h>
int cal(int a, int b){

 int res = 2 * a + 3 * b;
 return res;
}
int main(){
 printf("%.2f", (float)cal(10.2, 2.1));
 return 0;
}
