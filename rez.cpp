#include <iostream>
#include <cmath>
#include"Longs.h"

using namespace std;

int main(){
int a = -9;
int b = 10;
int c = 0;
c = -9 + (10 * (20 * 4));
for ( a; a < 20; a += -1){
b += 1;
}
if ( a > 10){
a ^= pow(a,3);
}
c = a + a;
return 0;
}