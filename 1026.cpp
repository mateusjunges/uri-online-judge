#include <iostream>
#include <stdio.h>

using namespace std;

unsigned int a, b;

int main(){
    while(scanf("%u %u", &a, &b) != EOF ){
        printf("%u\n", a^b); // Operador OU EXCLUSIVO para bits
    }
    return 0;
}
