#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= a; i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);

    int ans = num/denom;
    return ans;
}

int main(){
    int b, c;
    cin >> b >> c;

    int p = nCr(b, c);
    cout << p << endl;
}