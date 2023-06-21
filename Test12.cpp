#include <stdio.h>
#include <math.h>
int main(){
 char c = 65;
 ++c;
 printf("%c ", c);
 char d = c + 32;
 --d;
 printf("%c", (int)d);
 return 0;
}
