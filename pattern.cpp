#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     int i=1;
     while(i<=n){
        int j=1;
        while(j<=(n-i+1)){
            cout << j;
            j++;
        }
        int z=1;
        while(z<=(i-1)){
            cout << "*";
            z++;
        }
        
        int y =i-1;
        while(y){
            cout << "*";
            y--;
        }

        int k=1;
        int l= n-i+1;
        while(k<=(n-i+1)){
            cout << l;
            l--;
            k++;
        }
        cout << endl;
        i++;
     }
}