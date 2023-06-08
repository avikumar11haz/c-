#include<iostream>
using namespace std;

int main(){
    int a[6]= {0,1,1,0,0,1};
    for (int i =0 ; i < 6; i++){
        for (int j= i+1; j<6; j++){
            if(a[i] > a[j]){
                int temp;
                a[i] = temp;
                a[i] = a[j];
                a[j] = temp;
                break;
            }
        }
    }
    for(int i = 0; i<6; i++){
        cout << a[i] << " ";
    }
    
}