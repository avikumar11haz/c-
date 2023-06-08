#include<iostream>
using namespace std;

void printnewarray(int y[], int n){
     for(int i=0; i< n; i++){
        cout << y[i]<< " ";
    }

}

void swaparray(int y[], int n){
     for(int i = 0; i< n; i+=2){
        if(i+1 < n){
            swap(y[i], y[i+1]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[6]= {1,3,2,7,11,8};
 
    swaparray(arr, n);
    printnewarray(arr, n);

}