#include<bits/stdc++.h>
using namespace std;

#define M 5

int add_modulo(int a, int b){
    return ((a % M) + (b % M)) % M;
}

int sub_modulo(int a, int b){
    return ((a % M) - (b % M)) % M;
}

int mult_modulo(int a, int b){
    return ((a % M) * (b % M)) % M;
}

int pow_modulo(int a, int b){
    int res = 1;
 
    a = a % M;
  
    if(a == 0)
        return 0;
 
    while(b > 0){ 
        if (b & 1) 
            res = (res * a) % M; 
 
        b = b >> 1;
        a = (a * a) % M; 
    } 

    return res; 
}

int negToPos_modulo(int a){
    return (a % M + M) % M;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x=2, y=3;

    cout << x << " + " << y << " mod " << M << " = " << add_modulo(x, y) << "\n";
    cout << y << " - " << x << " mod " << M << " = " << sub_modulo(y, x) << "\n";
    cout << x << " - " << y << " mod " << M << " = " << negToPos_modulo(sub_modulo(x, y)) << "\n";
    cout << x << " * " << y << " mod " << M << " = " << mult_modulo(x, y) << "\n";
    cout << x << " ^ " << y << " mod " << M << " = " << pow_modulo(x, y) << "\n";

    return 0;
}