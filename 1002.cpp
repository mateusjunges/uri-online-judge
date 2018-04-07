#include <iostream>

using namespace std;

const double pi = 3.14159;

double r;
double a;

double calcula_area(double r){
    a = pi * (r*r);
    return a;
}

int main(){
    cin >> r;
    printf("A=%.4f\n", calcula_area(r));
    return 0;
}
